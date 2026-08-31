#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80208008(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80208008;

loc_80208008:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    ctx->lr = 0x80208034u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80209A18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80208038:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020804C;
    }
}

loc_80208040:
{
    // inline leaf 0x80208D84 (4 guest instruction(s))
}

loc_inl0_0x80208D84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x80208D88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80208D8C:
{
    MemoryInline::FlatWrite32((r13 + -24220), r3);
    goto loc_inl0_cont_80208D84;
}

loc_inl0_return:
{
}

loc_inl0_cont_80208D84:
{
    // end of inlined leaf 0x80208D84
    r3 = r30;
    goto loc_802080DC;
}

loc_8020804C:
{
    r3 = r28;
    r4 = r29;
    r5 = r31;
    ctx->lr = 0x8020805Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80209C2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80208060:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80208074;
    }
}

loc_80208068:
{
    // inline leaf 0x80208D84 (4 guest instruction(s))
}

loc_inl1_0x80208D84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x80208D88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80208D8C:
{
    MemoryInline::FlatWrite32((r13 + -24220), r3);
    goto loc_inl1_cont_80208D84;
}

loc_inl1_return:
{
}

loc_inl1_cont_80208D84:
{
    // end of inlined leaf 0x80208D84
    r3 = r30;
    goto loc_802080DC;
}

loc_80208074:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020903Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80208080:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020809C;
    }
}

loc_80208088:
{
    r31 = 65536;
    r3 = (r31 + -20478);
    // inline leaf 0x80208D84 (4 guest instruction(s))
}

loc_inl2_0x80208D84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl2_0x80208D88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80208D8C:
{
    MemoryInline::FlatWrite32((r13 + -24220), r3);
    goto loc_inl2_cont_80208D84;
}

loc_inl2_return:
{
}

loc_inl2_cont_80208D84:
{
    // end of inlined leaf 0x80208D84
    r3 = (r31 + -20478);
    goto loc_802080DC;
}

loc_8020809C:
{
    r3 = (r3 + 8);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x802080B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802078D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802080B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802080D8;
    }
}

loc_802080BC:
{
    ctx->lr = 0x802080C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802079F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r30 = r3;
    // inline leaf 0x80208D84 (4 guest instruction(s))
}

loc_inl3_0x80208D84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl3_0x80208D88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80208D8C:
{
    MemoryInline::FlatWrite32((r13 + -24220), r3);
    goto loc_inl3_cont_80208D84;
}

loc_inl3_return:
{
}

loc_inl3_cont_80208D84:
{
    // end of inlined leaf 0x80208D84
    r3 = MemoryInline::FlatRead32((r31 + 20));
    ctx->lr = 0x802080D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F4680u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    goto loc_802080DC;
}

loc_802080D8:
{
    r3 = 0;
}

loc_802080DC:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80208008 func_80208008 preserves=true fpr_mask=0x00000000
