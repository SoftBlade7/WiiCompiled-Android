#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061D090(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8061D090;

loc_8061D090:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32((r30 + 1200));
    r31 = (r3 + 52);
    r3 = r31;
    // inline leaf 0x8061B378 (8 guest instruction(s))
}

loc_inl0_0x8061B378:
{
}

loc_inl0_0x8061B37C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x8061B388;
    }
}

loc_inl0_0x8061B380:
{
    r3 = 0;
    goto loc_inl0_cont_8061B378;
}

loc_inl0_0x8061B388:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_inl0_cont_8061B378:
{
    // end of inlined leaf 0x8061B378
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_8061D0C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8061D0D4;
    }
}

loc_8061D0CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8061D0D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061D164;
    }
}

loc_8061D0D4:
{
    r0 = MemoryInline::FlatRead32((r30 + 1212));
}

loc_8061D0DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8061D0EC;
    }
}

loc_8061D0E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061D0E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061D130;
    }
}

loc_8061D0E8:
{
    goto loc_8061D164;
}

loc_8061D0EC:
{
    r4 = MemoryInline::FlatRead32((r30 + 1208));
    // inline leaf 0x8061BA48 (14 guest instruction(s))
}

loc_inl1_0x8061BA48:
{
}

loc_inl1_0x8061BA4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8061BA58;
    }
}

loc_inl1_0x8061BA50:
{
    r3 = 0;
    goto loc_inl1_cont_8061BA48;
}

loc_inl1_0x8061BA58:
{
}

loc_inl1_0x8061BA5C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8061BA68;
    }
}

loc_inl1_0x8061BA60:
{
    r3 = 0;
    goto loc_inl1_cont_8061BA48;
}

loc_inl1_0x8061BA68:
{
    r3 = (r3 & 4080);
    r0 = (r4 & 4080);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl1_cont_8061BA48:
{
    // end of inlined leaf 0x8061BA48
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8061D0F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061D164;
    }
}

loc_8061D0FC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 1212), r0);
    r3 = (r30 + 456);
    r4 = 9900;
    r5 = 0;
    ctx->lr = 0x8061D114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8061D11C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061D164;
    }
}

loc_8061D120:
{
    r4 = MemoryInline::FlatRead32((r30 + 1200));
    r3 = r31;
    ctx->lr = 0x8061D12Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061B8B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8061D164;
}

loc_8061D130:
{
    r0 = MemoryInline::FlatRead32((r30 + 1208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061D138:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061D144;
    }
}

loc_8061D13C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8061D140:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061D164;
    }
}

loc_8061D144:
{
    r4 = MemoryInline::FlatRead32((r30 + 1200));
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061B3CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8061D154:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061D164;
    }
}

loc_8061D158:
{
    r4 = MemoryInline::FlatRead32((r30 + 1200));
    r3 = r31;
    ctx->lr = 0x8061D164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061B8B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8061D164:
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8061D090 func_8061D090 preserves=true fpr_mask=0x00000000
