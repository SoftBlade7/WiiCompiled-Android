#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A9C08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A9C08;

loc_801A9C08:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -25320));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A9C28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A9C34;
    }
}

loc_801A9C2C:
{
    r3 = 0;
    goto loc_801A9E18;
}

loc_801A9C34:
{
    // inline leaf 0x801A1ECC (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 212));
    // end of inlined leaf 0x801A1ECC
    r4 = 0x80000000u;
    r5 = MemoryInline::FlatRead32((r4 + 228));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
}

loc_801A9C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A9C50;
    }
}

loc_801A9C48:
{
    r3 = 0;
    goto loc_801A9E18;
}

loc_801A9C50:
{
}

loc_801A9C54:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801A9D18;
    }
}

loc_801A9C58:
{
    r0 = MemoryInline::FlatRead16((r5 + 712));
}

loc_801A9C60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801A9CF4;
    }
}

loc_801A9C64:
{
}

loc_801A9C68:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801A9C88;
    }
}

loc_801A9C6C:
{
    r3 = MemoryInline::FlatRead32((r13 + -25312));
    r0 = MemoryInline::FlatRead32((r5 + 720));
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_801A9C7C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801A9C88;
    }
}

loc_801A9C80:
{
    r3 = 0;
    goto loc_801A9E18;
}

loc_801A9C88:
{
    r0 = 1;
    r3 = 0x80340000u;
    MemoryInline::FlatWrite16((r5 + 712), static_cast<uint16_t>(r0));
    r3 = (r3 + 30640);
    r0 = MemoryInline::FlatRead32((r5 + 720));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 732), r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801A9CB0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801A9CBC;
    }
}

loc_801A9CB4:
{
    MemoryInline::FlatWrite32(r3, r5);
    goto loc_801A9CC0;
}

loc_801A9CBC:
{
    MemoryInline::FlatWrite32((r4 + 736), r5);
}

loc_801A9CC0:
{
    MemoryInline::FlatWrite32((r5 + 740), r4);
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32((r5 + 736), r0);
    r4 = MemoryInline::FlatRead32((r5 + 732));
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r0 = MemoryInline::FlatRead32((r5 + 720));
    r4 = MemoryInline::FlatRead32((r13 + -25312));
    r0_subfic_ra_1 = r0;
    r0 = (31 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r13 + -25312), r0);
    MemoryInline::FlatWrite32((r13 + -25316), r3);
}

loc_801A9CF4:
{
    r0 = MemoryInline::FlatRead16((r5 + 418));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A9CFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A9D18;
    }
}

loc_801A9D00:
{
    r3 = r5;
    ctx->lr = 0x801A9D08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1ED8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A9D0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A9D18;
    }
}

loc_801A9D10:
{
    r3 = 0;
    goto loc_801A9E18;
}

loc_801A9D18:
{
    r0 = MemoryInline::FlatRead32((r13 + -25312));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A9D20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A9D7C;
    }
}

loc_801A9D24:
{
    r12 = MemoryInline::FlatRead32((r13 + -28960));
    r31 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r31 + 228));
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x801A9D3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    r3 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r31 + 228), r0);
    r3 = (r3 + 30896);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1E70u>(ctx);
}

loc_801A9D50:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65C0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801A9D54:
{
    r0 = MemoryInline::FlatRead32((r13 + -25312));
}

loc_801A9D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A9D54;
    }
}

loc_801A9D60:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -25312));
}

loc_801A9D6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A9D50;
    }
}

loc_801A9D70:
{
    r3 = 0x80340000u;
    r3 = (r3 + 30896);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A2098u>(ctx);
}

loc_801A9D7C:
{
    r4 = 0;
    r3 = 0x80340000u;
    MemoryInline::FlatWrite32((r13 + -25316), r4);
    r3 = (r3 + 30640);
    r0 = MemoryInline::FlatRead32((r13 + -25312));
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3_addr_1 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = r3_addr_1;
    r6 = MemoryInline::FlatRead32((r30 + 736));
}

loc_801A9DA4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801A9DB0;
    }
}

loc_801A9DA8:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    goto loc_801A9DB4;
}

loc_801A9DB0:
{
    MemoryInline::FlatWrite32((r6 + 740), r4);
}

loc_801A9DB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801A9DB8:
{
    MemoryInline::FlatWrite32(r3, r6);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A9DD8;
    }
}

loc_801A9DC0:
{
    r0 = (31 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r13 + -25312));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite32((r13 + -25312), r0);
}

loc_801A9DD8:
{
    r3 = 0;
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 732), r3);
    r31 = 0x80000000u;
    r4 = r30;
    MemoryInline::FlatWrite16((r30 + 712), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32((r13 + -28960));
    r3 = MemoryInline::FlatRead32((r31 + 228));
    ctr = r12;
    ctx->lr = 0x801A9E00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r31 + 228), r30);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1E70u>(ctx);
    r3 = r30;
    ctx->lr = 0x801A9E14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
}

loc_801A9E18:
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
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A9C08 func_801A9C08 preserves=true fpr_mask=0x00000000
