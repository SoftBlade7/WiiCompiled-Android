#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066FFA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

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

    goto loc_8066FFA4;

loc_8066FFA4:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r27);
    MemoryInline::FlatWriteRam32((r1 + 256), r28);
    MemoryInline::FlatWriteRam32((r1 + 260), r29);
    MemoryInline::FlatWriteRam32((r1 + 264), r30);
    MemoryInline::FlatWriteRam32((r1 + 268), r31);
    r28 = r4;
    r27 = r3;
    r31 = r5;
    r5 = (r1 + 12);
    r3 = r28;
    r4 = 0;
    // inline leaf 0x801DE43C (13 guest instruction(s))
}

loc_inl0_0x801DE43C:
{
}

loc_inl0_0x801DE440:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(2))) {
        goto loc_inl0_0x801DE450;
    }
}

loc_inl0_0x801DE444:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
}

loc_inl0_0x801DE44C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x801DE458;
    }
}

loc_inl0_0x801DE450:
{
    r3 = -3;
    goto loc_inl0_cont_801DE43C;
}

loc_inl0_0x801DE458:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 120));
    MemoryInline::FlatWriteRam32(r5, r0);
}

loc_inl0_cont_801DE43C:
{
    // end of inlined leaf 0x801DE43C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FFD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FFE0;
    }
}

loc_8066FFD8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_80670178;
}

loc_8066FFE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_8066FFE8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8066FFF4;
    }
}

loc_8066FFEC:
{
    r3 = 1;
    goto loc_80670178;
}

loc_8066FFF4:
{
    r3 = r28;
    r5 = (r31 + 8);
    r4 = 0;
    r6 = 1092;
    ctx->lr = 0x80670008u;
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
    InvokeDirectCpu<0x801E4DECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8067000C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670018;
    }
}

loc_80670010:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_80670178;
}

loc_80670018:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r30 = (r3 + -20);
    // inline leaf 0x801D2724 (3 guest instruction(s))
    r3 = 0x80250000u;
    r3 = (r3 + 12176);
    // end of inlined leaf 0x801D2724
    r5 = 0x808A0000u;
    r4 = r3;
    r3 = (r1 + 40);
    r6 = 20;
    r5 = (r5 + -22136);
    ctx->lr = 0x8067003Cu;
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
    InvokeDirectCpu<0x801D2ACCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = r30;
    r3 = (r1 + 40);
    r4 = (r31 + 28);
    ctx->lr = 0x8067004Cu;
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
    InvokeDirectCpu<0x801D2D08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 40);
    r4 = (r1 + 20);
    ctx->lr = 0x80670058u;
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
    InvokeDirectCpu<0x801D2D18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 2;
    r5 = (r31 + 8);
    r6 = (r1 + 20);
    r4 = 0;
    ctr = r0;
}

loc_8067006C:
{
    r3 = MemoryInline::FlatRead8(r6);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80670078:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670084;
    }
}

loc_8067007C:
{
    r0 = 0;
    goto loc_80670170;
}

loc_80670084:
{
    r3 = MemoryInline::FlatRead8((r6 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_80670090:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8067009C;
    }
}

loc_80670094:
{
    r0 = 0;
    goto loc_80670170;
}

loc_8067009C:
{
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 2));
}

loc_806700A8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806700B4;
    }
}

loc_806700AC:
{
    r0 = 0;
    goto loc_80670170;
}

loc_806700B4:
{
    r3 = MemoryInline::FlatRead8((r6 + 3));
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_806700C0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806700CC;
    }
}

loc_806700C4:
{
    r0 = 0;
    goto loc_80670170;
}

loc_806700CC:
{
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_806700D8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806700E4;
    }
}

loc_806700DC:
{
    r0 = 0;
    goto loc_80670170;
}

loc_806700E4:
{
    r3 = MemoryInline::FlatRead8((r6 + 5));
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_806700F0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806700FC;
    }
}

loc_806700F4:
{
    r0 = 0;
    goto loc_80670170;
}

loc_806700FC:
{
    r3 = MemoryInline::FlatRead8((r6 + 6));
    r0 = MemoryInline::FlatRead8((r5 + 6));
}

loc_80670108:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670114;
    }
}

loc_8067010C:
{
    r0 = 0;
    goto loc_80670170;
}

loc_80670114:
{
    r3 = MemoryInline::FlatRead8((r6 + 7));
    r0 = MemoryInline::FlatRead8((r5 + 7));
}

loc_80670120:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8067012C;
    }
}

loc_80670124:
{
    r0 = 0;
    goto loc_80670170;
}

loc_8067012C:
{
    r3 = MemoryInline::FlatRead8((r6 + 8));
    r0 = MemoryInline::FlatRead8((r5 + 8));
}

loc_80670138:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670144;
    }
}

loc_8067013C:
{
    r0 = 0;
    goto loc_80670170;
}

loc_80670144:
{
    r3 = MemoryInline::FlatRead8((r6 + 9));
    r0 = MemoryInline::FlatRead8((r5 + 9));
}

loc_80670150:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8067015C;
    }
}

loc_80670154:
{
    r0 = 0;
    goto loc_80670170;
}

loc_8067015C:
{
    r5 = (r5 + 10);
    r6 = (r6 + 10);
    r4 = (r4 + 9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8067006C;
    }
}

loc_8067016C:
{
    r0 = 1;
}

loc_80670170:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_80670178:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8067017C:
{
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806701E8;
    }
}

loc_80670184:
{
    r3 = r27;
    r4 = (r31 + 28);
    ctx->lr = 0x80670190u;
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
    InvokeDirectCpu<0x80673568u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r28;
    r4 = (r1 + 16);
    // inline leaf 0x801DE4EC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801DE4EC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806701A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806701B0;
    }
}

loc_806701A4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r29 = r3;
    goto loc_806701E8;
}

loc_806701B0:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(100));
}

loc_806701BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806701E0;
    }
}

loc_806701C0:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r4 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_806701E0:
{
    r3 = 0;
    goto loc_80670234;
}

loc_806701E8:
{
    r3 = r28;
    r4 = (r1 + 8);
    // inline leaf 0x801DE4EC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801DE4EC
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = 1;
    ctx->lr = 0x80670200u;
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
    InvokeDirectCpu<0x801DEA58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670204:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670214;
    }
}

loc_80670208:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r30 = r3;
    goto loc_80670218;
}

loc_80670214:
{
    r30 = 0;
}

loc_80670218:
{
    r3 = r30;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl4_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl4_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl4_0x8023320C;
    }
}

loc_inl4_0x80233204:
{
}

loc_inl4_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl4_0x80233214;
    }
}

loc_inl4_0x8023320C:
{
    r3 = 1;
    goto loc_inl4_cont_802331F8;
}

loc_inl4_0x80233214:
{
    r3 = 0;
}

loc_inl4_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670224:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670230;
    }
}

loc_80670228:
{
    r3 = r30;
    goto loc_80670234;
}

loc_80670230:
{
    r3 = r29;
}

loc_80670234:
{
    r27 = MemoryInline::FlatRead32((r1 + 252));
    r28 = MemoryInline::FlatRead32((r1 + 256));
    r29 = MemoryInline::FlatRead32((r1 + 260));
    r30 = MemoryInline::FlatRead32((r1 + 264));
    r31 = MemoryInline::FlatRead32((r1 + 268));
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066FFA4 func_8066FFA4 preserves=true fpr_mask=0x00000000
