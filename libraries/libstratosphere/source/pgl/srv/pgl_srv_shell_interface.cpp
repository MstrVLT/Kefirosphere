/*
 * Copyright (c) 2018-2020 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stratosphere.hpp>
#include "pgl_srv_shell_interface.hpp"
#include "pgl_srv_shell.hpp"

namespace ams::pgl::srv {

    Result ShellInterface::LaunchProgram(ams::sf::Out<os::ProcessId> out, const ncm::ProgramLocation &loc, u32 pm_flags, u8 pgl_flags) {
        return pgl::srv::LaunchProgram(out.GetPointer(), loc, pm_flags, pgl_flags);
    }

    Result ShellInterface::TerminateProcess(os::ProcessId process_id) {
        return pgl::srv::TerminateProcess(process_id);
    }

    Result ShellInterface::LaunchProgramFromHost(ams::sf::Out<os::ProcessId> out, const ams::sf::InBuffer &content_path, u32 pm_flags) {
        /* TODO */
    }

    Result ShellInterface::GetHostContentMetaInfo(ams::sf::Out<pgl::ContentMetaInfo> out, const ams::sf::InBuffer &content_path) {
        /* TODO */
    }

    Result ShellInterface::GetApplicationProcessId(ams::sf::Out<os::ProcessId> out) {
        /* TODO */
    }

    Result ShellInterface::BoostSystemMemoryResourceLimit(u64 size) {
        /* TODO */
    }

    Result ShellInterface::IsProcessTracked(ams::sf::Out<bool> out, os::ProcessId process_id) {
        /* TODO */
    }

    Result ShellInterface::EnableApplicationCrashReport(bool enabled) {
        /* TODO */
    }

    Result ShellInterface::IsApplicationCrashReportEnabled(ams::sf::Out<bool> out) {
        /* TODO */
    }

    Result ShellInterface::EnableApplicationAllThreadDumpOnCrash(bool enabled) {
        /* TODO */
    }

    Result ShellInterface::TriggerSnapShotDumper(const ams::sf::InBuffer &arg, SnapShotDumpType dump_type) {
        /* TODO */
    }

    Result ShellInterface::GetShellEventObserver(ams::sf::Out<std::shared_ptr<pgl::sf::IEventObserver>> out) {
        /* TODO */
    }

}