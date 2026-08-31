#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80115138(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80115138;

loc_80115138:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r3 = MemoryInline::FlatRead32((r3 + 356));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r4 = MemoryInline::FlatRead32((r30 + 100));
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r30 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80115170:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801151D4;
    }
}

loc_80115174:
{
    r3 = r30;
    ctx->lr = 0x8011517Cu;
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
    InvokeDirectCpu<0x80111DE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115180:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011518C;
    }
}

loc_80115184:
{
    r3 = 0;
    goto loc_80115364;
}

loc_8011518C:
{
    r3 = MemoryInline::FlatRead32((r30 + 100));
    r0 = MemoryInline::FlatRead32((r30 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80115198:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801151A4;
    }
}

loc_8011519C:
{
    r3 = 2;
    goto loc_80115364;
}

loc_801151A4:
{
    r3 = (r30 + 84);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl1_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_inl1_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl1_cont_80111DC4;
}

loc_inl1_return:
{
}

loc_inl1_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
    r0 = MemoryInline::FlatRead32((r30 + 380));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801151B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801151C0;
    }
}

loc_801151B8:
{
    r3 = 3;
    goto loc_80115364;
}

loc_801151C0:
{
    r0 = MemoryInline::FlatRead32((r30 + 360));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r31));
}

loc_801151C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801151D4;
    }
}

loc_801151CC:
{
    r3 = 1;
    goto loc_80115364;
}

loc_801151D4:
{
    r0 = MemoryInline::FlatRead32((r30 + 380));
}

loc_801151DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801152BC;
    }
}

loc_801151E0:
{
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801151EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801151FC;
    }
}

loc_801151F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801151F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80115248;
    }
}

loc_801151FC:
{
    r3 = (r13 + -30212);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r5 = r3;
    r3 = r30;
    r4 = (r13 + -30212);
    ctx->lr = 0x80115214u;
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
    InvokeDirectCpu<0x8011248Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115218:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115224;
    }
}

loc_8011521C:
{
    r3 = 0;
    goto loc_80115364;
}

loc_80115224:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80115228:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115234;
    }
}

loc_8011522C:
{
    r3 = 2;
    goto loc_80115364;
}

loc_80115234:
{
    r0 = MemoryInline::FlatRead32((r30 + 380));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8011523C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801152BC;
    }
}

loc_80115240:
{
    r3 = 3;
    goto loc_80115364;
}

loc_80115248:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 380), r0);
    goto loc_801152BC;
}

loc_80115254:
{
    r3 = MemoryInline::FlatRead32((r30 + 356));
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl2_0x800EF4B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl2_0x800EF4B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl2_0x800EF4C4;
    }
}

loc_inl2_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl2_0x800EF4C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl2_0x800EF4CC;
    }
}

loc_inl2_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl2_cont_800EF4B0;
}

loc_inl2_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl2_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r28 = r3;
    r29 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 356));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r3 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r29));
    r4 = (r3 - r29);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = r28;
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r6 = (r6_rot_2 & 134217727);
    r4 = r30;
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_2 & 134217727);
    ctx->lr = 0x80115290u;
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
    InvokeDirectCpu<0x80114B1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115294:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801152A0;
    }
}

loc_80115298:
{
    r3 = 0;
    goto loc_80115364;
}

loc_801152A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_801152A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801152B0;
    }
}

loc_801152A8:
{
    r3 = 2;
    goto loc_80115364;
}

loc_801152B0:
{
    r3 = MemoryInline::FlatRead32((r30 + 360));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 360), r0);
}

loc_801152BC:
{
    r4 = MemoryInline::FlatRead32((r30 + 360));
}

loc_801152C4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r31))) {
        goto loc_80115254;
    }
}

loc_801152C8:
{
    r0 = MemoryInline::FlatRead32((r30 + 404));
}

loc_801152D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80115304;
    }
}

loc_801152D4:
{
    r5 = MemoryInline::FlatRead32((r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801152DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80115304;
    }
}

loc_801152E0:
{
    r4 = MemoryInline::FlatRead32((r30 + 124));
    r3 = (r30 + 84);
    ctx->lr = 0x801152ECu;
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
    InvokeDirectCpu<0x801119C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801152F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801152FC;
    }
}

loc_801152F4:
{
    r3 = 0;
    goto loc_80115364;
}

loc_801152FC:
{
    r3 = (r30 + 120);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl4_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_inl4_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl4_cont_80111DC4;
}

loc_inl4_return:
{
}

loc_inl4_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
}

loc_80115304:
{
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80115310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011534C;
    }
}

loc_80115314:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011531C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011534C;
    }
}

loc_80115320:
{
    r31 = 0x80280000u;
    r3 = (r31 + -9912);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r5 = r3;
    r3 = r30;
    r4 = (r31 + -9912);
    ctx->lr = 0x8011533Cu;
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
    InvokeDirectCpu<0x8011248Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80115340:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011534C;
    }
}

loc_80115344:
{
    r3 = 0;
    goto loc_80115364;
}

loc_8011534C:
{
    r4 = MemoryInline::FlatRead32((r30 + 100));
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r30 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8011535C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80115364;
    }
}

loc_80115360:
{
    r3 = 2;
}

loc_80115364:
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80115138 func_80115138 preserves=true fpr_mask=0x00000000
