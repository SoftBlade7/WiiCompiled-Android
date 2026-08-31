#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059D2D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059D2D4;

loc_8059D2D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r3 = MemoryInline::FlatRead32((r5 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    r0 = 0;
    r3 = MemoryInline::FlatRead16((r3 + 16));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8059D30C:
{
    MemoryInline::FlatWrite32((r31 + 68), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059D328;
    }
}

loc_8059D314:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8059D318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059D334;
    }
}

loc_8059D31C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_8059D320:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059D340;
    }
}

loc_8059D324:
{
    goto loc_8059D348;
}

loc_8059D328:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 68), r0);
    goto loc_8059D348;
}

loc_8059D334:
{
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r31 + 68), r0);
    goto loc_8059D348;
}

loc_8059D340:
{
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r31 + 68), r0);
}

loc_8059D348:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059D364:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8059D434;
    }
}

loc_8059D368:
{
    r3 = 1717960704;
    r3 = (r3 + 26215);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r3 = (static_cast<int32_t>(r3) >> 2);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r3 = (r3 + r4);
    r3 = (r3 * 10);
    r3 = (r0 - r3);
}

loc_8059D38C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8059D39C;
    }
}

loc_8059D390:
{
    r3 = MemoryInline::FlatRead32((r31 + 68));
    r3 = (r3 | 8);
    MemoryInline::FlatWrite32((r31 + 68), r3);
}

loc_8059D39C:
{
    r4 = 1374420992;
    r3 = 1717960704;
    r4 = (r4 + -31457);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r5 = (r3 + 26215);
    r3 = (static_cast<int32_t>(r4) >> 5);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r3 = (r3 + r4);
    r3 = (r3 * 100);
    r3 = (r0 - r3);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r3 = (static_cast<int32_t>(r3) >> 2);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r3 = (r3 + r4);
}

loc_8059D3D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8059D3E8;
    }
}

loc_8059D3DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 68));
    r3 = (r3 | 16);
    MemoryInline::FlatWrite32((r31 + 68), r3);
}

loc_8059D3E8:
{
    r4 = 274857984;
    r3 = 1374420992;
    r4 = (r4 + 19923);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r5 = (r3 + -31457);
    r3 = (static_cast<int32_t>(r4) >> 6);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r3 = (r3 + r4);
    r3 = (r3 * 1000);
    r0 = (r0 - r3);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8059D424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059D434;
    }
}

loc_8059D428:
{
    r0 = MemoryInline::FlatRead32((r31 + 68));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r31 + 68), r0);
}

loc_8059D434:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8059D2D4 func_8059D2D4 preserves=true fpr_mask=0x00000000
