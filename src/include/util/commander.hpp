#pragma once

#include "base.hpp"
#include "JvmException.hpp"

namespace jvm {
    struct CommandState {
        bool shouldDescribe;
        std::string filename;
    };

    class Commander {
        std::vector<std::string> _commands;

    public:
        static CommandState parse(const std::vector<std::string>& commands);
    
    private:
        /*
         * Show help information about the CLI.
         */
        static void show_help();

        /*
         * Show help information about the CLI.
         */
        static std::string get_name();

        /*
         * Show help information about the CLI.
         */
        static void whatShouldDo(CommandState& state);
    };
}
