/*
 * Bittorrent Client using Qt and libtorrent.
 * Copyright (C) 2015, 2017  Vladimir Golovnev <glassez@yandex.ru>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * In addition, as a special exception, the copyright holders give permission to
 * link this program with the OpenSSL project's "OpenSSL" library (or with
 * modified versions of it that use the same license as the "OpenSSL" library),
 * and distribute the linked executables. You must obey the GNU General Public
 * License in all respects for all of the code used other than "OpenSSL".  If you
 * modify file(s), you may extend this exception to your version of the file(s),
 * but you are not obligated to do so. If you do not wish to do so, delete this
 * exception statement from your version.
 */

#pragma once

#include <QtGlobal>

namespace BitTorrent
{
    struct CacheStatus
    {
        quint64 diskRequestLatency = 0; // disk.request_latency
        quint64 totalUsedBuffers = 0; // disk.disk_blocks_in_use
        quint64 jobQueueLength = 0; // disk.queued_disk_jobs
        quint64 queuedBytes = 0; // disk.queued_write_bytes
        quint64 diskNumBlocksWritten = 0; // disk.num_blocks_written
        quint64 diskNumBlocksRead = 0; // disk.num_blocks_read
        quint64 averageJobTime = 0;
        qreal readRatio = 0;  // TODO: remove when LIBTORRENT_VERSION_NUM >= 20000
        quint64 readJobs = 0; // disk.num_read_ops
        quint64 writeJobs = 0; // disk.num_write_ops
        quint64 hashJobs = 0; // disk.num_blocks_hashed
        quint64 diskReadTime = 0; // disk.disk_read_time
        quint64 diskWriteTime = 0; // disk.disk_write_time
        quint64 diskHashTime = 0; // disk.disk_hash_time
        quint64 diskJobTime = 0; // disk.disk_job_time
    };
}
