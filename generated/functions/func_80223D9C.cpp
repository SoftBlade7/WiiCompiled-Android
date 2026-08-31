#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80035940_statefree();

extern "C" void func_80223D9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

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

    goto loc_80223D9C;

loc_80223D9C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    r3 = (r3 + 116);
    // inline leaf 0x800375C0 (11 guest instruction(s))
}

loc_inl0_0x800375C0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x800375C8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800375D4;
    }
}

loc_inl0_0x800375CC:
{
    r3 = 0;
    goto loc_inl0_cont_800375C0;
}

loc_inl0_0x800375D4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl0_cont_800375C0:
{
    // end of inlined leaf 0x800375C0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80223DD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80223EB0;
    }
}

loc_80223DD8:
{
    r3 = (r28 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl1_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80037604;
    }
}

loc_inl1_0x800375FC:
{
    r0 = 0;
    goto loc_inl1_0x80037618;
}

loc_inl1_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_inl1_0x80037618:
{
}

loc_inl1_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80037628;
    }
}

loc_inl1_0x80037620:
{
    r3 = r4;
    goto loc_inl1_cont_800375F0;
}

loc_inl1_0x80037628:
{
    r3 = 0;
}

loc_inl1_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
    // inline leaf 0x80026DA0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 44));
    // end of inlined leaf 0x80026DA0
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80223DE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80223EB0;
    }
}

loc_80223DEC:
{
    r3 = (r28 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl3_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x80037604;
    }
}

loc_inl3_0x800375FC:
{
    r0 = 0;
    goto loc_inl3_0x80037618;
}

loc_inl3_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
}

loc_inl3_0x80037618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x8003761C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_0x80037628;
    }
}

loc_inl3_0x80037620:
{
    r3 = r4;
    goto loc_inl3_cont_800375F0;
}

loc_inl3_0x80037628:
{
    r3 = 0;
}

loc_inl3_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026DB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80223E00:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80223EB0;
    }
}

loc_80223E08:
{
    r6 = MemoryInline::FlatRead32((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80223E10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80223EB0;
    }
}

loc_80223E14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80223E18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80223E7C;
    }
}

loc_80223E1C:
{
    r29 = 0;
    goto loc_80223E54;
}

loc_80223E24:
{
    r6 = (r4 + r5);
    r4_addr_3 = (r4 + r5);
    r5 = MemoryInline::FlatRead32(r4_addr_3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 262140);
    r4 = r31;
    r5 = (r5 + r6);
    r3 = (r1 + 24);
    r5 = (r5 + 4);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    // inline leaf 0x8004BCB0 (11 guest instruction(s))
}

loc_inl4_0x8004BCB0:
{
}

loc_inl4_0x8004BCB4:
{
    r3 = MemoryInline::FlatRead32(r3);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x8004BCCC;
    }
}

loc_inl4_0x8004BCBC:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    goto loc_inl4_cont_8004BCB0;
}

loc_inl4_0x8004BCCC:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_inl4_cont_8004BCB0:
{
    // end of inlined leaf 0x8004BCB0
    r29 = (r29 + 1);
}

loc_80223E54:
{
    r4 = MemoryInline::FlatRead32((r30 + 184));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r3 + 8);
    r4_addr_2 = (r4 + r5);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
    r3 = (r4 + r5);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_80223E74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80223E24;
    }
}

loc_80223E78:
{
    goto loc_80223F38;
}

loc_80223E7C:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 262140);
    r4 = r31;
    r3 = (r1 + 20);
    r6 = (r5 + r6);
    r6 = (r6 + 8);
    r5 = MemoryInline::FlatRead32(r6);
    r5 = (r5 + r6);
    r5 = (r5 + 4);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004BCB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_80223F38;
}

loc_80223EB0:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80035940u) && KnownTranslatedCpuCall<0x80035940u>::kAvailable && !KnownTranslatedCpuCall<0x80035940u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80035940u>()) {
        const auto state_free_result_80035940_22E8 = func_80035940_statefree();
        r3 = static_cast<uint32_t>(state_free_result_80035940_22E8);
    } else {
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
        InvokeDirectCpu<0x80035940u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = (r1 + 16);
    r5 = (r28 + 4);
    r6 = 0;
    ctx->lr = 0x80223EC8u;
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
    InvokeDirectCpu<0x80035DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80223ECC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80223F1C;
    }
}

loc_80223ED0:
{
    r29 = 0;
    goto loc_80223EF8;
}

loc_80223ED8:
{
    r3 = (r1 + 12);
    r4 = (r1 + 16);
    r5 = (r29 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8004BC80u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r4 = r31;
    r3 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004BCB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r29 = (r29 + 1);
}

loc_80223EF8:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r0 + r3);
    r3 = (r3 + 8);
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_80223F14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80223ED8;
    }
}

loc_80223F18:
{
    goto loc_80223F38;
}

loc_80223F1C:
{
    r3 = (r1 + 8);
    r4 = (r1 + 16);
    r5 = (r29 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8004BC80u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r4 = r31;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004BCB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_80223F38:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0001FB gpr_write=0xFC0009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80223D9C func_80223D9C preserves=true fpr_mask=0x00000000
