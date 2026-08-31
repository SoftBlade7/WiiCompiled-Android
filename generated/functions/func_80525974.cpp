#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80525974(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80525974;

loc_80525974:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052599C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805259A8;
    }
}

loc_805259A0:
{
    r3 = 0;
    goto loc_80525A60;
}

loc_805259A8:
{
    r4 = 0;
    r3 = (r3 + 16);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl0_0x800AF180:
{
}

loc_inl0_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800AF190;
    }
}

loc_inl0_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_800AF180;
}

loc_inl0_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805259B8:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805259DC;
    }
}

loc_805259C0:
{
    r4 = r31;
    r3 = (r27 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AF110u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = r31;
    r3 = (r27 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AEF80u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    goto loc_80525A14;
}

loc_805259DC:
{
}

loc_805259E0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80525A14;
    }
}

loc_805259E4:
{
    r3 = (r27 + 4);
    r4 = 0;
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl1_0x800AF180:
{
}

loc_inl1_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AF190;
    }
}

loc_inl1_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_800AF180;
}

loc_inl1_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805259F4:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80525A14;
    }
}

loc_805259FC:
{
    r4 = r31;
    r3 = (r27 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AF110u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = r31;
    r3 = (r27 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AEF80u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_80525A14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80525A18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80525A5C;
    }
}

loc_80525A1C:
{
    MemoryInline::FlatWrite32((r31 + 4), r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_80525A24:
{
    MemoryInline::FlatWrite32((r31 + 8), r28);
    r0 = MemoryInline::FlatRead8((r31 + 28));
    r0 = (r0 & -49);
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80525A44;
    }
}

loc_80525A38:
{
    r0 = MemoryInline::FlatRead8((r31 + 28));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
}

loc_80525A44:
{
    r0 = MemoryInline::FlatRead8((r31 + 28));
    r0 = (r0 | 1);
    r0 = (r0 & -3);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r31 + 16), r29);
}

loc_80525A5C:
{
    r3 = r31;
}

loc_80525A60:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007B gpr_write=0xF800007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80525974 func_80525974 preserves=true fpr_mask=0x00000000
