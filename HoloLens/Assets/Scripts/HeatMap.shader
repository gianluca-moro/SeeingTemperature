// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/Heatmap" {
    Properties{
        _HeatTex("Texture", 2D) = "white" {}
    }
        SubShader{
            Tags {"Queue" = "Transparent"}
            Blend SrcAlpha OneMinusSrcAlpha // Alpha blend

            Pass {
                CGPROGRAM
                #pragma vertex vert             
                #pragma fragment frag

                struct vertInput {
                    float4 pos : POSITION;
                };

                struct vertOutput {
                    float4 pos : POSITION;
                    fixed3 worldPos : TEXCOORD1;
                };

                vertOutput vert(vertInput input) {
                    vertOutput o;
                    o.pos = UnityObjectToClipPos(input.pos);
                    o.worldPos = mul(unity_ObjectToWorld, input.pos).xyz;
                    return o;
                }

                const int _Points_Length = 2;
                uniform float3 _Points[2];        // (x, y, z) = position
                uniform float2 _Properties[2];    // x = radius, y = intensity

                sampler2D _HeatTex;

                void init() {
                    _Points[0] = float3(0, 0.1, 0);
                    _Points[1] = float3(0, 0, 0);
                    _Properties[0] = float2(0.04, 1);
                    _Properties[1] = float2(0.1, 1);
                }

                half4 frag(vertOutput output) : COLOR{
                    // Loops over all the points
                    init();
                    half h = 0;
                    for (int i = 0; i < _Points_Length; i++)
                    {
                        // Calculates the contribution of each point
                        float3 wp = output.worldPos;
                        half di = distance(float3(wp.x, wp.y, 0), float3(_Points[i].x, _Points[i].y, 0));

                        half ri = _Properties[i].x;
                        half hi = 1 - saturate(di / ri);

                        h += hi * _Properties[i].y;
                    }

                    // Converts (0-1) according to the heat texture
                    h = saturate(h);
                    // half4 color = tex2D(_HeatTex, fixed2(h, 0.5));
                    
                    half4 color = half4(0, 0, 0, 0);
                    if( h > 0.3)
                        color = half4(h, 0.4, 0.2, 1);
                    

                    return color;
                }
                ENDCG
            }
    }
        Fallback "Diffuse"
}