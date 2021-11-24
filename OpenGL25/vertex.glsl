#version 450

// ZMIANA
in vec2 textureCoor;
in vec3 position;
in vec3 normal;

uniform mat4 p_matrix;
uniform mat4 v_matrix;
uniform mat4 m_matrix;
uniform mat3 norm_matrix;

// ZMIANA
out vec2 fragTextureCoor;
out vec3 fragNormal;
out vec4 fragPos;

void main()
{
    // ZMIANA
    fragTextureCoor = textureCoor;
    mat4 pvm_matrix = p_matrix*v_matrix*m_matrix;

    gl_Position = pvm_matrix*vec4(position, 1.0);
    fragPos = m_matrix*vec4(position, 1.0);

    fragNormal = normalize(norm_matrix*normal);
}
