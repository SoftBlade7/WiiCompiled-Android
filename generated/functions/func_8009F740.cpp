#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009F740(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8009F740;

loc_8009F740:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8009F74C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009F778;
    }
}

loc_8009F770:
{
    r3 = -1;
    goto loc_8009F86C;
}

loc_8009F778:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8009F784:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8009F790;
    }
}

loc_8009F788:
{
    r3 = -1;
    goto loc_8009F86C;
}

loc_8009F790:
{
    r0 = (r3 * 20);
    r3 = r30;
    r4 = (r4 + r0);
    r31 = (r4 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r5 = 1;
    goto loc_8009F7F4;
}

loc_8009F7B0:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 3);
    r6 = (r0 & 7);
}

loc_8009F7C0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r3))) {
        goto loc_8009F7E4;
    }
}

loc_8009F7C4:
{
    r30_addr_2 = (r30 + r4);
    r0 = MemoryInline::FlatRead8(r30_addr_2);
    r4 = (7 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(7) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009F7E4;
    }
}

loc_8009F7DC:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    goto loc_8009F7E8;
}

loc_8009F7E4:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_8009F7E8:
{
    r0 = (r0 * 20);
    r4 = (r29 + r0);
    r31 = (r4 + 8);
}

loc_8009F7F4:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 1);
}

loc_8009F7FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009F7B0;
    }
}

loc_8009F800:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_8009F80C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009F818;
    }
}

loc_8009F810:
{
    r4 = 0;
    goto loc_8009F850;
}

loc_8009F818:
{
    r5 = MemoryInline::FlatRead32((r28 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8009F820:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009F82C;
    }
}

loc_8009F824:
{
    r4 = 0;
    goto loc_8009F850;
}

loc_8009F82C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = MemoryInline::FlatRead32((r28 + 44));
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009F840:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009F84C;
    }
}

loc_8009F844:
{
    r4 = 0;
    goto loc_8009F850;
}

loc_8009F84C:
{
    r4 = (r0 + r4);
}

loc_8009F850:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8009F85C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009F868;
    }
}

loc_8009F860:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    goto loc_8009F86C;
}

loc_8009F868:
{
    r3 = -1;
}

loc_8009F86C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8009F740 func_8009F740 preserves=true fpr_mask=0x00000000
