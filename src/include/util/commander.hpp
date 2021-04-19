#include <vector>
#include <string>

#include "JvmException.hpp"

namespace jvm {

    /**
     * Stores the current state of execution of the JVM.
     */
    struct CommandState {
        bool shouldDescribe;
        bool shouldRun;
        bool shouldDebug;
        bool fast_run;
        std::string filename;
    };

    /**
     *  Manages the state of exection.
     */
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
