#ifndef MODEL_H
#define MODEL_H

#include <QString>
#include <QStringList>

#include <vector>


class Model
{
public:
    Model(): v_cnt(0), vn_cnt(0), f_cnt(0), read_normals(false), read_textures(false), vertData(0), v(0), vn(0), vt(0) { }
    ~Model() { delete [] vertData; }


    void readFile(QString fname, bool readNormals, bool readTextures, float scale);

    float *getVertData() { return vertData; }
    int getVertDataStride() { return stride; }
    int getVertDataCount() { return f_cnt; }
    int getVertDataSize() { return 3*f_cnt*stride*sizeof(float); }
    float *getEboArray() { return ebo_v; }
    int *getEboIndices() { return indices; }
    int getEboDataSize() { return ebo_size; }
    int getIndicesSize() { return indices_size; }

private:
    QStringList source;
    int v_cnt, vn_cnt, vt_cnt, f_cnt, stride;
    bool read_normals, read_textures;
    float *vertData;
    float *v, *vn, *vt;
    float *ebo_v;
    int *indices;
    int indices_size;
    int ebo_size;

    void count_items();
    void alloc_items();
    void parse_items(float scale);
    void print();
    void alloc_ebo();
    void generate_ebo();
};

#endif // MODEL_H
