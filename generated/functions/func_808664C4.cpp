#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808664C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808664C4;

loc_808664C4:
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
    r0 = MemoryInline::FlatRead8((r3 + 1786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808664E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80866524;
    }
}

loc_808664E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1787));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808664F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866524;
    }
}

loc_808664F4:
{
    r4 = MemoryInline::FlatRead16((r3 + 156));
}

loc_808664FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(19))) {
        goto loc_80866510;
    }
}

loc_80866500:
{
}

loc_80866504:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(14))) {
        goto loc_80866510;
    }
}

loc_80866508:
{
}

loc_8086650C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_80866518;
    }
}

loc_80866510:
{
    r0 = 1;
    goto loc_8086651C;
}

loc_80866518:
{
    r0 = 0;
}

loc_8086651C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80866520:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086652C;
    }
}

loc_80866524:
{
    r3 = -1;
    goto loc_80866614;
}

loc_8086652C:
{
    r5 = 0x808B0000u;
    r3 = 0x809C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 262140);
    r3 = MemoryInline::FlatRead32((r3 + 18240));
    r5 = (r5 + -1192);
    r5_addr_0 = (r5 + r0);
    r6 = MemoryInline::FlatRead32(r5_addr_0);
    r5 = r28;
    r30 = (r6 + 4);
    // inline leaf 0x80868F1C (6 guest instruction(s))
    r4 = (r4 * 144);
    r0 = (r5 * 48);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = (r3 + 9288);
    // end of inlined leaf 0x80868F1C
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r29 = r3;
    r31 = (r27 + r0);
    r4 = MemoryInline::FlatRead32((r31 + 320));
    // inline leaf 0x80867550 (13 guest instruction(s))
}

loc_inl1_0x80867550:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x80867558:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r6))) {
        goto loc_inl1_0x80867564;
    }
}

loc_inl1_0x8086755C:
{
    r3 = -1;
    goto loc_inl1_cont_80867550;
}

loc_inl1_0x80867564:
{
    r0 = MemoryInline::FlatRead8((r3 + 38));
    r3 = -1;
    r5 = (r6 + r0);
    r0 = (r5 + -1);
}

loc_inl1_0x80867578:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8086757C:
{
    r3 = (r4 - r6);
    goto loc_inl1_cont_80867550;
}

loc_inl1_return:
{
}

loc_inl1_cont_80867550:
{
    // end of inlined leaf 0x80867550
    r0 = MemoryInline::FlatRead8((r27 + 1789));
}

loc_8086656C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80866590;
    }
}

loc_80866570:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80866574:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866590;
    }
}

loc_80866578:
{
    r3 = r29;
    ctx->lr = 0x80866580u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80867194u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 320), r3);
    r4 = r3;
    r3 = r29;
    // inline leaf 0x80867550 (13 guest instruction(s))
}

loc_inl2_0x80867550:
{
    r6 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x80867558:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r6))) {
        goto loc_inl2_0x80867564;
    }
}

loc_inl2_0x8086755C:
{
    r3 = -1;
    goto loc_inl2_cont_80867550;
}

loc_inl2_0x80867564:
{
    r0 = MemoryInline::FlatRead8((r3 + 38));
    r3 = -1;
    r5 = (r6 + r0);
    r0 = (r5 + -1);
}

loc_inl2_0x80867578:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8086757C:
{
    r3 = (r4 - r6);
    goto loc_inl2_cont_80867550;
}

loc_inl2_return:
{
}

loc_inl2_cont_80867550:
{
    // end of inlined leaf 0x80867550
}

loc_80866590:
{
    r4 = 0x809C0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = (r0 - r28);
    r0 = (r30 + r3);
    r6 = MemoryInline::FlatRead32((r31 + 320));
    r3 = MemoryInline::FlatRead32((r4 + 2928));
    r30 = (r5 + r0);
}

loc_808665B4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_808665C0;
    }
}

loc_808665B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_808665BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80866610;
    }
}

loc_808665C0:
{
    r3 = 0x808B0000u;
    r4 = 0x808B0000u;
    r0 = MemoryInline::FlatRead32((r3 + 228));
    r4 = (r4 + 232);
    r3 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_808665DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80866610;
    }
}

loc_808665E0:
{
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_808665E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80866604;
    }
}

loc_808665EC:
{
    r0 = (r3 * 28);
    r3 = 0x808B0000u;
    r3 = (r3 + 232);
    r3 = (r3 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80866610;
}

loc_80866604:
{
    r4 = (r4 + 28);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808665E0;
    }
}

loc_80866610:
{
    r3 = r30;
}

loc_80866614:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8000FFB gpr_write=0xF8000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808664C4 func_808664C4 preserves=true fpr_mask=0x00000000
