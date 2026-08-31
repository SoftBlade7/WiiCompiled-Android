#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004BE90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004BE90;

loc_8004BE90:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r8 = (r5 + 8);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r0 = MemoryInline::FlatRead16((r5 + 12));
    r3 = MemoryInline::FlatRead32(r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r7 = (r3 + 4);
    r6 = MemoryInline::FlatRead32(r3);
    r3 = (r5 + r0);
    r31 = (r3 + 8);
    goto loc_8004BF14;
}

loc_8004BEC8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 8191);
    r8 = r31;
}

loc_8004BED4:
{
    r3 = (r3 & 7);
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_8004BF04;
    }
}

loc_8004BEDC:
{
    r7_addr_2 = (r7 + r0);
    r0 = MemoryInline::FlatRead8(r7_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r0 = (r0 & 1);
}

loc_8004BEEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004BF04;
    }
}

loc_8004BEF0:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r5 + r0);
    r31 = (r3 + 8);
    goto loc_8004BF14;
}

loc_8004BF04:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r5 + r0);
    r31 = (r3 + 8);
}

loc_8004BF14:
{
    r3 = MemoryInline::FlatRead16(r31);
    r0 = MemoryInline::FlatRead16(r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8004BF20:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8004BEC8;
    }
}

loc_8004BF24:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r3 = r4;
    r4 = (r1 + 8);
    r5 = (r5 + r0);
    r0 = (r5 + -4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x8004BF40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004BCE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004BF44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004BF50;
    }
}

loc_8004BF48:
{
    r3 = r31;
    goto loc_8004BF54;
}

loc_8004BF50:
{
    r3 = 0;
}

loc_8004BF54:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800001FB gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004BE90 func_8004BE90 preserves=true fpr_mask=0x00000000
