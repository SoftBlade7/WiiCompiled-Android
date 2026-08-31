#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80155138(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80155138;

loc_80155138:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_80155140:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80155190;
    }
}

loc_80155144:
{
    r6 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r5 + r0);
    r8 = 0;
    r7 = (r0 + r6);
    r6 = (r5 + r6);
    r7 = (r7 + 7);
    r9 = (r6 + 23);
    goto loc_80155178;
}

loc_80155164:
{
    r0 = MemoryInline::FlatRead8(r7);
    r8 = (r8 + 1);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    r9 = (r9 + -1);
}

loc_80155178:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r6 = (r8 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_80155184:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80155164;
    }
}

loc_80155188:
{
    r0 = 16;
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
}

loc_80155190:
{
    r0 = (0 - r4);
    r6 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r0 | r4);
    r4 = (r6 + -2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r4));
    r6 = (r4 & 65535);
    r4 = 0;
    r0 = (r0 & 2);
    r6 = (r5 + r6);
    r0 = (r0 | 33);
    MemoryInline::FlatWrite8((r6 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r6 + 9), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r6 + 2);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80154AC4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80155138 func_80155138 preserves=true fpr_mask=0x00000000
