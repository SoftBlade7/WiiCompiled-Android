#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057C69C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8057C69C;

loc_8057C69C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r1 + 156), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r1 + 152), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + 22768);
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r29);
    r29 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r1 + 144), r28);
    r28 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 268435456);
    r0_mrot_0 = (r3 & 8);
    r0_mdest_0 = (r0 & -9);
    r0 = (r0_mdest_0 | r0_mrot_0);
}

loc_8057C6F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C708;
    }
}

loc_8057C6F8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 2048);
}

loc_8057C700:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C708;
    }
}

loc_8057C704:
{
    r29 = 1;
}

loc_8057C708:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 16);
}

loc_8057C710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C73C;
    }
}

loc_8057C714:
{
}

loc_8057C718:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8057C72C;
    }
}

loc_8057C71C:
{
    r3 = r28;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f30.d = MemoryInline::FlatReadFloat32((r3 + 92));
    goto loc_8057C760;
}

loc_8057C72C:
{
    r3 = r28;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f30.d = MemoryInline::FlatReadFloat32((r3 + 80));
    goto loc_8057C760;
}

loc_8057C73C:
{
}

loc_8057C740:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8057C754;
    }
}

loc_8057C744:
{
    r3 = r28;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f30.d = MemoryInline::FlatReadFloat32((r3 + 88));
    goto loc_8057C760;
}

loc_8057C754:
{
    r3 = r28;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f30.d = MemoryInline::FlatReadFloat32((r3 + 76));
}

loc_8057C760:
{
}

loc_8057C764:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8057C78C;
    }
}

loc_8057C768:
{
    r3 = r28;
    // inline leaf 0x80590A10 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A10
}

loc_8057C774:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_8057C78C;
    }
}

loc_8057C778:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 260));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 104));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 260), f0.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
}

loc_8057C78C:
{
    r3 = MemoryInline::FlatRead32(r28);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 344));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f31.d = PpcFmulsInline(f1.d, f30.d);
    r8 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r8 & 33554432);
}

loc_8057C7A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C7B4;
    }
}

loc_8057C7A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 636));
    f31.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_8057C9BC;
}

loc_8057C7B4:
{
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r0 = 0;
    r7 = (r6 & 524288);
}

loc_8057C7C0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8057C7D8;
    }
}

loc_8057C7C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 556));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057C7D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057C7D8;
    }
}

loc_8057C7D4:
{
    r0 = 1;
}

loc_8057C7D8:
{
}

loc_8057C7DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C7E8;
    }
}

loc_8057C7E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 156));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8057C7E8:
{
    r0 = (r6 & 2);
}

loc_8057C7EC:
{
    r5 = 1;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C810;
    }
}

loc_8057C7F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057C800:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
}

loc_8057C808:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C810;
    }
}

loc_8057C80C:
{
    r5 = 0;
}

loc_8057C810:
{
}

loc_8057C814:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8057C904;
    }
}

loc_8057C818:
{
    r0 = (r6 & 96);
}

loc_8057C81C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C864;
    }
}

loc_8057C820:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057C830:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057C864;
    }
}

loc_8057C834:
{
}

loc_8057C838:
{
    r0 = 0;
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8057C854;
    }
}

loc_8057C840:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 556));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057C84C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057C854;
    }
}

loc_8057C850:
{
    r0 = 1;
}

loc_8057C854:
{
}

loc_8057C858:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C864;
    }
}

loc_8057C85C:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_8057C904;
}

loc_8057C864:
{
}

loc_8057C868:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8057C904;
    }
}

loc_8057C86C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 32768);
}

loc_8057C874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C880;
    }
}

loc_8057C878:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 220));
    goto loc_8057C884;
}

loc_8057C880:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
}

loc_8057C884:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f3.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f2.d = PpcFmulsInline(f0.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_8057C89C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057C8C4;
    }
}

loc_8057C8A0:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_8057C904;
}

loc_8057C8C4:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057C8C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057C8FC;
    }
}

loc_8057C8CC:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 140));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_8057C904;
}

loc_8057C8FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 140));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8057C904:
{
}

loc_8057C908:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8057C910;
    }
}

loc_8057C90C:
{
    goto loc_8057C914;
}

loc_8057C910:
{
    f31.d = (-(f31.d));
}

loc_8057C914:
{
    r0 = (r8 & -2147483648);
}

loc_8057C918:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C92C;
    }
}

loc_8057C91C:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 & 536870912);
    r0_mrot_1 = (r5 & 32768);
    r0_mdest_1 = (r0 & -32769);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_8057C928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C93C;
    }
}

loc_8057C92C:
{
    r0 = (r6 & 8);
}

loc_8057C930:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C93C;
    }
}

loc_8057C934:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 216));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8057C93C:
{
    r0 = (r8 & 8192);
}

loc_8057C940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C954;
    }
}

loc_8057C944:
{
    r0 = (r6 & 8);
}

loc_8057C948:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C954;
    }
}

loc_8057C94C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 596));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8057C954:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 16);
}

loc_8057C95C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C9BC;
    }
}

loc_8057C960:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 136));
    f1.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8057C974:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057C9BC;
    }
}

loc_8057C978:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 4));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8057C984:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057C994;
    }
}

loc_8057C988:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_8057C994:
{
}

loc_8057C998:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8057C9A4;
    }
}

loc_8057C99C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 192));
    goto loc_8057C9A8;
}

loc_8057C9A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 188));
}

loc_8057C9A8:
{
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 176));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_8057C9BC:
{
    r0 = (r8 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C9C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057CB44;
    }
}

loc_8057C9C4:
{
    r0 = (r8 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C9C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057CB44;
    }
}

loc_8057C9CC:
{
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r5 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C9D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057CA6C;
    }
}

loc_8057C9D8:
{
    r0 = (r5 & -2147483648);
}

loc_8057C9DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C9F8;
    }
}

loc_8057C9E0:
{
    r5 = MemoryInline::FlatRead32((r28 + 600));
    r0 = MemoryInline::FlatRead8((r5 + 58));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C9EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057C9F8;
    }
}

loc_8057C9F0:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_8057CA6C;
}

loc_8057C9F8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057CA00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057CA6C;
    }
}

loc_8057CA04:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 28));
}

loc_8057CA10:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(30))) {
        goto loc_8057CA60;
    }
}

loc_8057CA14:
{
}

loc_8057CA18:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(70))) {
        goto loc_8057CA60;
    }
}

loc_8057CA1C:
{
    r3 = (r3 + -30);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 132), r3);
    f3.d = MemoryInline::FlatReadFloat64((r31 + 144));
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 152));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f31.d = PpcFmulsInline(f31.d, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8057CA54:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057CA6C;
    }
}

loc_8057CA58:
{
    f31.d = f0.d;
    goto loc_8057CA6C;
}

loc_8057CA60:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(70));
}

loc_8057CA64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057CA6C;
    }
}

loc_8057CA68:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
}

loc_8057CA6C:
{
    r3 = r28;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = 0x802A0000u;
    r5 = (r1 + 8);
    r4 = (r4 + 16712);
    r3 = (r3 + 240);
    ctx->lr = 0x8057CA88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r1 + 20);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 92));
    r4 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r5 = (r28 + 92);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 96));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 100));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8057CAE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = f30.d;
    ctx->lr = 0x8057CAF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F8E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057CAF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057CB00;
    }
}

loc_8057CAFC:
{
    goto loc_8057CB04;
}

loc_8057CB00:
{
    f1.d = (-(f1.d));
}

loc_8057CB04:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 628));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8057CB14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057CB44;
    }
}

loc_8057CB18:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 632));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057CB38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057CB40;
    }
}

loc_8057CB3C:
{
    f1.d = f0.d;
}

loc_8057CB40:
{
    f31.d = PpcFmulsInline(f31.d, f1.d);
}

loc_8057CB44:
{
    r12 = MemoryInline::FlatRead32((r28 + 12));
    f1.d = f31.d;
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x8057CB5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(34));
}

loc_8057CB6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057CDA4;
    }
}

loc_8057CB70:
{
    r3 = r28;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 184));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057CBA0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057CBAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057CDA4;
    }
}

loc_8057CBB0:
{
    r3 = r28;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = MemoryInline::FlatRead32((r3 + 176));
    MemoryInline::FlatWriteRam32((r1 + 112), r4);
    r0 = MemoryInline::FlatRead32((r3 + 184));
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    r4 = MemoryInline::FlatRead32((r3 + 180));
    r3 = r28;
    f4.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f1.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteRam32((r1 + 116), r4);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    f6.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = PpcFmulsInline(f4.d, f4.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    f1.d = PpcFmulsInline(f5.d, f5.d);
    r4 = MemoryInline::FlatRead32((r1 + 100));
    r3 = MemoryInline::FlatRead32((r1 + 104));
    f2.d = PpcFmulsInline(f3.d, f3.d);
    r0 = MemoryInline::FlatRead32((r1 + 108));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f3.d);
    MemoryInline::FlatWriteRam32((r1 + 64), r4);
    MemoryInline::FlatWriteRam32((r1 + 68), r3);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    ctx->lr = 0x8057CC80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f30.d = f1.d;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8057CCA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8057CCB0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057CDA4;
    }
}

loc_8057CCB4:
{
    f2.d = f30.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800853C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 156));
    r3 = (r1 + 48);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 116));
    r4 = (r28 + 68);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8057CCD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023A0A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = r28;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 252));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r3 = (r1 + 32);
    f31.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f13.d = MemoryInline::FlatReadFloat32((r4 + 240));
    f7.d = PpcFmulsInline(f10.d, f0.d);
    f12.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    f11.d = MemoryInline::FlatReadFloat32((r4 + 244));
    f4.d = PpcFmulsInline(f10.d, f13.d);
    f9.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f8.d = MemoryInline::FlatReadFloat32((r4 + 248));
    f6.d = PpcFmulsInline(f31.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f3.d = PpcFmulsInline(f12.d, f0.d);
    f2.d = PpcFmulsInline(f10.d, f11.d);
    f1.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f10.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f7.d = PpcFmulsInline(f12.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = PpcFmulsInline(f12.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f7.d));
    f1.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = PpcFmulsInline(f9.d, f13.d);
    f2.d = PpcFmulsInline(f31.d, f11.d);
    f6.d = PpcFmulsInline(f9.d, f11.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f31.d, f8.d);
    f0.d = PpcFmulsInline(f12.d, f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r3 = r28;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 240), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r3 + 244), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 252), f0.d);
}

loc_8057CDA4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r29 = MemoryInline::FlatRead32((r1 + 148));
    r0 = MemoryInline::FlatRead32((r1 + 196));
    r28 = MemoryInline::FlatRead32((r1 + 144));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8057C69C func_8057C69C preserves=false fpr_mask=0xC0000000
