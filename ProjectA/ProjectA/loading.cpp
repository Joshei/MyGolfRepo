////SIMPLE OBJ LOADER
////http://www.opengl-tutorial.org/beginners-tutorials/tutorial-7-model-loading/
//#include <glad/glad.h>
//#include "GLFW/glfw3.h"
//
//#include <learnopengl/shader_s.h>
//
//#include <C:/openglusage/headershader/common.h >
//
//#include <stdio.h>
//#include <string.h>
//#include <C:/openglusage/glm/glm.hpp>
//#include <vector>
//
//unsigned int VAO1, VBO1;
//
//FILE * file;
//
//
//
////these are loaded in and look to be out to
////std::vector< glm::vec3 > vertices;
//std::vector< glm::vec2 > uvs;
//std::vector< glm::vec3 > normals; // Won't be used at the moment.
//std::vector< glm::vec3 >vertices;
//
////Signature
////bool loadOBJ(
////	const char * path,
////	std::vector < glm::vec3 > & out_vertices,
////	std::vector < glm::vec2 > & out_uvs,
////	std::vector < glm::vec3 > & out_normals
////)
//
//
////std::vector< glm::vec2 > uvs;
//
////glm::vec3 tempvec = glm::vec3(0, 0, 0);
//std::vector< unsigned int > vertexIndices, uvIndices, normalIndices;
//
//std::vector < glm::vec3 >  temp_vertices;
//std::vector < glm::vec2 >  temp_uvs;
//std::vector < glm::vec3 >  temp_normals;
//
//
//
//
////reading file
//
//
//
//
////void loader::loadfile() {
////
////}
//
//
////int loadobjmodelandrender(int h)
//int functionLoadA(void)
//{
//	//perhaps a material file : .mtl
//	file = fopen("C:\images for opengl\model1.obj", "r");
//	if (file == NULL) {
//		printf("Impossible to open the file !\n");
//		return false;
//	}
//
//	return(1);
//}
//
//
//
//int loadobjmodelandrender(void)
//{
//	
//	//externed in common.h
//	glGenVertexArrays(1, &VAO1);
//	glGenBuffers(1, &VBO1);
//	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
//	glBindVertexArray(VAO1);
//
//	glBindBuffer(GL_ARRAY_BUFFER, VBO1);
//	
//	
//	//glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//
//	glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(glm::vec3), &vertices[0], GL_STATIC_DRAW);
//
//
//
//
//	while (1) {
//
//		char lineHeader[128];
//		// read the first word of the line
//		int res = fscanf(file, "%s", lineHeader);
//		if (res == EOF)
//			break; // EOF = End Of File. Quit the loop.
//
//				   // else : parse lineHeader
//
//
//
//		if (strcmp(lineHeader, "v") == 0) {
//			glm::vec3 vertex;
//			fscanf(file, "%f %f %f\n", &vertex.x, &vertex.y, &vertex.z);
//			temp_vertices.push_back(vertex);
//
//
//		}
//		else if (strcmp(lineHeader, "vt") == 0) {
//			glm::vec2 uv;
//			fscanf(file, "%f %f\n", &uv.x, &uv.y);
//			temp_uvs.push_back(uv);
//		}
//		else if (strcmp(lineHeader, "vn") == 0) {
//			glm::vec3 normal;
//			fscanf(file, "%f %f %f\n", &normal.x, &normal.y, &normal.z);
//			temp_normals.push_back(normal);
//		}
//		else if (strcmp(lineHeader, "f") == 0) {
//			std::string vertex1, vertex2, vertex3;
//			unsigned int vertexIndex[3], uvIndex[3], normalIndex[3];
//			int matches = fscanf(file, "%d/%d/%d %d/%d/%d %d/%d/%d\n", &vertexIndex[0], &uvIndex[0], &normalIndex[0], &vertexIndex[1], &uvIndex[1], &normalIndex[1], &vertexIndex[2], &uvIndex[2], &normalIndex[2]);
//			if (matches != 9) {
//				printf("File can't be read by our simple parser : ( Try exporting with other options\n");
//				return false;
//			}
//			vertexIndices.push_back(vertexIndex[0]);
//			vertexIndices.push_back(vertexIndex[1]);
//			vertexIndices.push_back(vertexIndex[2]);
//			uvIndices.push_back(uvIndex[0]);
//			uvIndices.push_back(uvIndex[1]);
//			uvIndices.push_back(uvIndex[2]);
//			normalIndices.push_back(normalIndex[0]);
//			normalIndices.push_back(normalIndex[1]);
//
//		}//this was missing from source code
//
//
//
//	}//uncertain
//
//			//PROCESSING DATA
//			// For each vertex of each triangle
//			for (unsigned int i = 0; i < vertexIndices.size(); i++) {
//
//
//				unsigned int g = vertexIndices[i];
//
//				//unsigned int g;
//				//check this should be fine
//				glm::vec3 vertex = temp_vertices[g];
//
//
//				//chech this as out?
//				vertices.push_back(vertex);
//
//
//			}
//
//			///////////////////
//
//
//
//			//signed int VBO1;// , VAO1;
//			glGenVertexArrays(1, &VAO1);
//			glGenBuffers(1, &VBO1);
//			// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
//			glBindVertexArray(VAO1);
//
//			glBindBuffer(GL_ARRAY_BUFFER, VBO1);
//
//
//			//glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
//
//			glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(glm::vec3), &vertices[0], GL_STATIC_DRAW);
//
//			////just moved here
//
//			glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
//			glEnableVertexAttribArray(0);
//			// color attribute
//			glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
//			glEnableVertexAttribArray(1);
//
//
//
//			//possibly put render code in here!  If so, no need for common.h externs!
//
//			//could try moving this if there is a failure during testing!
//			glBindVertexArray(VAO1);
//			glDrawArrays(GL_TRIANGLES, 0, 3);
//
//			///////////////////
//
//			
//
//
//		
//
//
//			return(1);
//
//	
//}