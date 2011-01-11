#ifndef IHOS_H
#define IHOS_H


#include <string>


namespace ihos
{

    int makedirs(const std::string& name, int mode = 777);

    int removedirs(const std::string& name);

    int renames(const std::string& old_name, const std::string& new_name);

    /** 
     * Directory tree generator.
     * 
     * For each directory in the director tree rooted at top (including to itself,
     * but excluding '.' and '..') yields a 3-tuple
     * 
     * @param top 
     * @param topdown 
     * @param onerror 
     * 
     * @return 
     */
    int walk(const std::string top, bool topdown = true, int onerror = 0);

    int execl(const std::string file, char** argv);

    int execle(const std::string& file, char** argv);

    int execlp(const std::string& file, char** argv);

    int execlpea(const std::string& file, char** argv);

    int execvp(const std::string& file, char** argv);

    int execvpe(const std::string& file, char** argv);
};

#endif
