#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FA738(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806FA738;

loc_806FA738:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 3792);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806FA768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAA94;
    }
}

loc_806FA76C:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_806FA774:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806FA780;
    }
}

loc_806FA778:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806FA784;
}

loc_806FA780:
{
    r0 = -1;
}

loc_806FA784:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(84));
}

loc_806FA788:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FAA94;
    }
}

loc_806FA78C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 18240));
    ctx->lr = 0x806FA798u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80868638u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80622EA0 (10 guest instruction(s))
}

loc_inl0_0x80622EA0:
{
    r4 = MemoryInline::FlatRead32((r3 + 892));
}

loc_inl0_0x80622EA8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_inl0_0x80622EB4;
    }
}

loc_inl0_0x80622EAC:
{
    r3 = 0;
    goto loc_inl0_cont_80622EA0;
}

loc_inl0_0x80622EB4:
{
    r0 = (r4 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 852));
}

loc_inl0_cont_80622EA0:
{
    // end of inlined leaf 0x80622EA0
    r29 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(89));
}

loc_806FA7B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FA7D8;
    }
}

loc_806FA7B4:
{
    r0 = MemoryInline::FlatRead32((r28 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(89));
}

loc_806FA7BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FA7D8;
    }
}

loc_806FA7C0:
{
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FA7CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FA7D8;
    }
}

loc_806FA7D0:
{
    r4 = 0;
    ctx->lr = 0x806FA7D8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806FA7D8:
{
    r4 = MemoryInline::FlatRead32((r28 + 28));
    r3 = (r1 + 8);
    ctx->lr = 0x806FA7E4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800AD860u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FA7EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FA7F8;
    }
}

loc_806FA7F0:
{
    r30 = -1;
    goto loc_806FA808;
}

loc_806FA7F8:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 256);
    ctx->lr = 0x806FA804u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800AE420u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
}

loc_806FA808:
{
}

loc_806FA80C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(87))) {
        goto loc_806FA8EC;
    }
}

loc_806FA810:
{
}

loc_806FA814:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(95))) {
        goto loc_806FA8EC;
    }
}

loc_806FA818:
{
    r4 = MemoryInline::FlatRead32((r28 + 44));
    r0 = MemoryInline::FlatRead32((r28 + 40));
}

loc_806FA824:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_806FA8EC;
    }
}

loc_806FA828:
{
}

loc_806FA82C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r4))) {
        goto loc_806FA8EC;
    }
}

loc_806FA830:
{
    r0 = 4;
    r3 = (r31 + 0);
    r5 = 0;
    ctr = r0;
}

loc_806FA840:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_806FA848:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_806FA8E0;
    }
}

loc_806FA84C:
{
}

loc_806FA850:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806FA870;
    }
}

loc_806FA854:
{
}

loc_806FA858:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_806FA88C;
    }
}

loc_806FA85C:
{
}

loc_806FA860:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_806FA8A8;
    }
}

loc_806FA864:
{
}

loc_806FA868:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_806FA8C4;
    }
}

loc_806FA86C:
{
    goto loc_806FA8EC;
}

loc_806FA870:
{
    r4 = 917504;
    r3 = 458752;
    r0 = (r4 + -22033);
    MemoryInline::FlatWrite32((r28 + 44), r0);
    r0 = (r3 + 4520);
    MemoryInline::FlatWrite32((r28 + 48), r0);
    goto loc_806FA8EC;
}

loc_806FA88C:
{
    r4 = 1310720;
    r3 = 917504;
    r0 = (r4 + 17744);
    MemoryInline::FlatWrite32((r28 + 44), r0);
    r0 = (r3 + -22033);
    MemoryInline::FlatWrite32((r28 + 48), r0);
    goto loc_806FA8EC;
}

loc_806FA8A8:
{
    r4 = 1769472;
    r3 = 1310720;
    r0 = (r4 + -8192);
    MemoryInline::FlatWrite32((r28 + 44), r0);
    r0 = (r3 + 17744);
    MemoryInline::FlatWrite32((r28 + 48), r0);
    goto loc_806FA8EC;
}

loc_806FA8C4:
{
    r4 = 458752;
    r3 = 1769472;
    r0 = (r4 + 4520);
    MemoryInline::FlatWrite32((r28 + 44), r0);
    r0 = (r3 + -8192);
    MemoryInline::FlatWrite32((r28 + 48), r0);
    goto loc_806FA8EC;
}

loc_806FA8E0:
{
    r3 = (r3 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806FA840;
    }
}

loc_806FA8EC:
{
    r0 = MemoryInline::FlatRead32((r28 + 52));
}

loc_806FA8F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(87))) {
        goto loc_806FA91C;
    }
}

loc_806FA8F8:
{
}

loc_806FA8FC:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(87))) {
        goto loc_806FA91C;
    }
}

loc_806FA900:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(95));
}

loc_806FA904:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FA91C;
    }
}

loc_806FA908:
{
    r3 = r30;
    r4 = (r28 + 44);
    r5 = (r28 + 48);
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F8220u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_806FA91C:
{
    r0 = MemoryInline::FlatRead32((r28 + 52));
}

loc_806FA924:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(87))) {
        goto loc_806FAA04;
    }
}

loc_806FA928:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead8((r3 + 1228));
}

loc_806FA93C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806FA9CC;
    }
}

loc_806FA940:
{
    r3 = MemoryInline::FlatRead32((r28 + 44));
    r3 = (r3 + -65536);
    r3 = (r3 + 11536);
}

loc_806FA950:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r3))) {
        goto loc_806FA99C;
    }
}

loc_806FA954:
{
    r0 = MemoryInline::FlatRead32((r28 + 40));
}

loc_806FA95C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_806FA99C;
    }
}

loc_806FA960:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9004));
    r0 = MemoryInline::FlatRead32((r3 + 184));
}

loc_806FA970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806FA99C;
    }
}

loc_806FA974:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 148));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 456));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FA980:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FA98C;
    }
}

loc_806FA984:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 148), f0.d);
}

loc_806FA98C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 456));
    r3 = (r3 + 128);
    r4 = 100;
    ctx->lr = 0x806FA99Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806FA99C:
{
    r3 = MemoryInline::FlatRead32((r28 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r3));
}

loc_806FA9A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FA9C0;
    }
}

loc_806FA9A8:
{
    r0 = MemoryInline::FlatRead32((r28 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_806FA9B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FA9C0;
    }
}

loc_806FA9B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 56), static_cast<uint8_t>(r0));
    goto loc_806FAA84;
}

loc_806FA9C0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 56), static_cast<uint8_t>(r0));
    goto loc_806FAA84;
}

loc_806FA9CC:
{
    r3 = MemoryInline::FlatRead32((r28 + 44));
    r3 = (r3 + -131072);
    r3 = (r3 + 9536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r3));
}

loc_806FA9DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FA9F8;
    }
}

loc_806FA9E0:
{
    r0 = MemoryInline::FlatRead32((r28 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_806FA9E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FA9F8;
    }
}

loc_806FA9EC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 56), static_cast<uint8_t>(r0));
    goto loc_806FAA84;
}

loc_806FA9F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 56), static_cast<uint8_t>(r0));
    goto loc_806FAA84;
}

loc_806FAA04:
{
}

loc_806FAA08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(95))) {
        goto loc_806FAA44;
    }
}

loc_806FAA0C:
{
    r3 = MemoryInline::FlatRead32((r28 + 48));
    r3 = (r3 + -65536);
    r3 = (r3 + -2000);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r3));
}

loc_806FAA1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FAA38;
    }
}

loc_806FAA20:
{
    r0 = MemoryInline::FlatRead32((r28 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_806FAA28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FAA38;
    }
}

loc_806FAA2C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 57), static_cast<uint8_t>(r0));
    goto loc_806FAA84;
}

loc_806FAA38:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 57), static_cast<uint8_t>(r0));
    goto loc_806FAA84;
}

loc_806FAA44:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9004));
    r0 = MemoryInline::FlatRead32((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FAA54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FAA84;
    }
}

loc_806FAA58:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 148));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 520));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FAA64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FAA74;
    }
}

loc_806FAA68:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 456));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 148), f0.d);
}

loc_806FAA74:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 520));
    r3 = (r3 + 128);
    r4 = 20;
    ctx->lr = 0x806FAA84u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806FAA84:
{
    MemoryInline::FlatWrite32((r28 + 52), r29);
    r3 = (r1 + 8);
    MemoryInline::FlatWrite32((r28 + 40), r30);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AD970u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_806FAA94:
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FA738 func_806FA738 preserves=true fpr_mask=0x00000000
