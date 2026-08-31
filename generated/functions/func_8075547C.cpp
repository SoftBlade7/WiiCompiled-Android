#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8075547C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8075547C;

loc_8075547C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead32((r3 + 176));
    r30 = 0x808D0000u;
    r31 = 0x808A0000u;
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807554A4:
{
    r30 = (r30 + -15216);
    r31 = (r31 + 13280);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807558AC;
    }
}

loc_807554B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_807554B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807558AC;
    }
}

loc_807554B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_807554BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807558AC;
    }
}

loc_807554C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 412));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807554C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807558AC;
    }
}

loc_807554CC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r28 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x807554E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 16842752;
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r4 + 257);
    r0 = (r3 & ~r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8075550C;
    }
}

loc_807554F4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8656));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067DCC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_80755504:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8075550C;
    }
}

loc_80755508:
{
    r28 = 1;
}

loc_8075550C:
{
}

loc_80755510:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807555F0;
    }
}

loc_80755514:
{
    r3 = MemoryInline::FlatRead32((r29 + 384));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 384), r3);
    r0 = MemoryInline::FlatRead32((r30 + 64));
}

loc_80755528:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_807555F8;
    }
}

loc_8075552C:
{
    r0 = MemoryInline::FlatRead32((r29 + 412));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
}

loc_8075553C:
{
    MemoryInline::FlatWriteFloat32((r29 + 204), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 212), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 296), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 300), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80755558;
    }
}

loc_80755550:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80755554:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807555C0;
    }
}

loc_80755558:
{
    r3 = MemoryInline::FlatRead32((r29 + 200));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r3 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8075556C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807555C0;
    }
}

loc_80755570:
{
    r0 = (r3 & 16384);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80755574:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807555C0;
    }
}

loc_80755578:
{
    r0 = MemoryInline::FlatRead32((r29 + 468));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80755580:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807555C0;
    }
}

loc_80755584:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 2;
    MemoryInline::FlatWriteFloat32((r29 + 204), f1.d);
    r4 = 7;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r5 = 1;
    MemoryInline::FlatWriteFloat32((r29 + 212), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    MemoryInline::FlatWrite32((r29 + 176), r0);
    MemoryInline::FlatWriteFloat32((r29 + 296), f1.d);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->lr = 0x807555B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 324), static_cast<uint8_t>(r0));
    goto loc_807555E4;
}

loc_807555C0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 176), r0);
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r4 = 5;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    ctx->lr = 0x807555E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807555E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 176));
    MemoryInline::FlatWriteFloat32((r29 + 396), f0.d);
    goto loc_807555F8;
}

loc_807555F0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 384), r0);
}

loc_807555F8:
{
    r3 = MemoryInline::FlatRead32((r29 + 200));
}

loc_80755600:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807556E0;
    }
}

loc_80755604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r3 & 8192);
}

loc_80755614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80755620;
    }
}

loc_80755618:
{
    r0 = (r3 & 16384);
}

loc_8075561C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807556E0;
    }
}

loc_80755620:
{
    r0 = MemoryInline::FlatRead32((r29 + 412));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
}

loc_80755630:
{
    MemoryInline::FlatWriteFloat32((r29 + 204), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 212), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 296), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 300), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8075564C;
    }
}

loc_80755644:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80755648:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807556B4;
    }
}

loc_8075564C:
{
    r3 = MemoryInline::FlatRead32((r29 + 200));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r3 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80755660:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807556B4;
    }
}

loc_80755664:
{
    r0 = (r3 & 16384);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80755668:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807556B4;
    }
}

loc_8075566C:
{
    r0 = MemoryInline::FlatRead32((r29 + 468));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80755674:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807556B4;
    }
}

loc_80755678:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 2;
    MemoryInline::FlatWriteFloat32((r29 + 204), f1.d);
    r4 = 7;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r5 = 1;
    MemoryInline::FlatWriteFloat32((r29 + 212), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    MemoryInline::FlatWrite32((r29 + 176), r0);
    MemoryInline::FlatWriteFloat32((r29 + 296), f1.d);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->lr = 0x807556A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 324), static_cast<uint8_t>(r0));
    goto loc_807556D8;
}

loc_807556B4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 176), r0);
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r4 = 5;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    ctx->lr = 0x807556D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807556D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 176));
    MemoryInline::FlatWriteFloat32((r29 + 396), f0.d);
}

loc_807556E0:
{
    r3 = MemoryInline::FlatRead32((r29 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807556E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807558AC;
    }
}

loc_807556EC:
{
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f1.d = MemoryInline::FlatReadFloat32(r3);
    r28 = r3;
    r27 = 1;
    r26 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000EF04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80755710:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80755730;
    }
}

loc_80755714:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000EF04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
}

loc_80755728:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80755730;
    }
}

loc_8075572C:
{
    r26 = 0;
}

loc_80755730:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80755734:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80755754;
    }
}

loc_80755738:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000EF04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
}

loc_8075574C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80755754;
    }
}

loc_80755750:
{
    r27 = 0;
}

loc_80755754:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80755758:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807558AC;
    }
}

loc_8075575C:
{
    r3 = MemoryInline::FlatRead32((r29 + 200));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    f3.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x807557A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 392));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807557B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807558A4;
    }
}

loc_807557B8:
{
    r3 = MemoryInline::FlatRead32((r29 + 464));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 464), r3);
    r0 = MemoryInline::FlatRead32((r30 + 116));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_807557CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807558AC;
    }
}

loc_807557D0:
{
    r4 = MemoryInline::FlatRead32((r29 + 412));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 120));
    f1.d = MemoryInline::FlatReadFloat32(r31);
}

loc_807557E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
    MemoryInline::FlatWrite32((r29 + 468), r3);
    MemoryInline::FlatWrite32((r29 + 464), r0);
    MemoryInline::FlatWriteFloat32((r29 + 204), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 212), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 296), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 300), f0.d);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8075580C;
    }
}

loc_80755804:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80755808:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80755874;
    }
}

loc_8075580C:
{
    r3 = MemoryInline::FlatRead32((r29 + 200));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r3 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80755820:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80755874;
    }
}

loc_80755824:
{
    r0 = (r3 & 16384);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80755828:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80755874;
    }
}

loc_8075582C:
{
    r0 = MemoryInline::FlatRead32((r29 + 468));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80755834:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80755874;
    }
}

loc_80755838:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 2;
    MemoryInline::FlatWriteFloat32((r29 + 204), f1.d);
    r4 = 7;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r5 = 1;
    MemoryInline::FlatWriteFloat32((r29 + 212), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    MemoryInline::FlatWrite32((r29 + 176), r0);
    MemoryInline::FlatWriteFloat32((r29 + 296), f1.d);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->lr = 0x80755868u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 324), static_cast<uint8_t>(r0));
    goto loc_80755898;
}

loc_80755874:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 176), r0);
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r4 = 5;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    ctx->lr = 0x80755898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80755898:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 176));
    MemoryInline::FlatWriteFloat32((r29 + 396), f0.d);
    goto loc_807558AC;
}

loc_807558A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 464), r0);
}

loc_807558AC:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8075547C func_8075547C preserves=true fpr_mask=0x00000000
