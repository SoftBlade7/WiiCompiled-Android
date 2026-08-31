#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E0FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E0FFC;

loc_805E0FFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
}

loc_805E1014:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWrite32((r3 + 148), r4);
    MemoryInline::FlatWrite32((r3 + 152), r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_805E1074;
    }
}

loc_805E1028:
{
    r5 = MemoryInline::FlatRead32((r3 + 84));
}

loc_805E1030:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805E1074;
    }
}

loc_805E1034:
{
}

loc_805E1038:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805E1048;
    }
}

loc_805E103C:
{
}

loc_805E1040:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_805E1060;
    }
}

loc_805E1044:
{
    goto loc_805E1074;
}

loc_805E1048:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621CE0 (11 guest instruction(s))
}

loc_inl0_0x80621CE0:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl0_0x80621CE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621CEC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl0_0x80621CF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621CF8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 288), r4);
    MemoryInline::FlatWrite32((r3 + 292), r5);
    goto loc_inl0_cont_80621CE0;
}

loc_inl0_return:
{
}

loc_inl0_cont_80621CE0:
{
    // end of inlined leaf 0x80621CE0
    goto loc_805E1074;
}

loc_805E1060:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r31 + 100));
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621CB0 (12 guest instruction(s))
}

loc_inl1_0x80621CB0:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl1_0x80621CB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80621CBC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl1_0x80621CC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80621CC8:
{
    r5 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 288), r0);
    MemoryInline::FlatWrite32((r3 + 292), r4);
    goto loc_inl1_cont_80621CB0;
}

loc_inl1_return:
{
}

loc_inl1_cont_80621CB0:
{
    // end of inlined leaf 0x80621CB0
}

loc_805E1074:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 768), r0);
    r4 = 0x809C0000u;
    MemoryInline::FlatWrite32((r31 + 156), r0);
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(78));
}

loc_805E1094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E10AC;
    }
}

loc_805E1098:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(80));
}

loc_805E109C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E10AC;
    }
}

loc_805E10A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(79));
}

loc_805E10A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E10C0;
    }
}

loc_805E10A8:
{
    goto loc_805E10E4;
}

loc_805E10AC:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E1748u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    goto loc_805E10E4;
}

loc_805E10C0:
{
    r5 = 0x809C0000u;
    r0 = 5;
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    MemoryInline::FlatWrite32((r3 + 3352), r0);
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r0 = MemoryInline::FlatRead32((r4 + 968));
    MemoryInline::FlatWrite32((r3 + 5976), r0);
}

loc_805E10E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E0FFC func_805E0FFC preserves=true fpr_mask=0x00000000
