#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80587D68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80587D68;

loc_80587D68:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 112u, (r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    f28.d = f1.d;
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r1 + 76), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 704));
    r4 = MemoryInline::FlatRead32(r3);
    f27.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    f29.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 33554432);
}

loc_80587DD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80587DE0;
    }
}

loc_80587DD4:
{
    f27.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f29.d = MemoryInline::FlatReadFloat32((r5 + 36));
    goto loc_80587E18;
}

loc_80587DE0:
{
    r3 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_80587DF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80587E0C;
    }
}

loc_80587DF8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80587E08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80587E18;
    }
}

loc_80587E0C:
{
    r3 = MemoryInline::FlatRead32((r30 + 704));
    f27.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f29.d = MemoryInline::FlatReadFloat32((r3 + 28));
}

loc_80587E18:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 664));
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 668));
    r3 = r30;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 23220));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f1.d));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 264u, true, false);
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 664), f31.d);
    f30.d = (-(f31.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 23220));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 668), f27.d);
    // inline leaf 0x80590664 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r0 & 1);
    // end of inlined leaf 0x80590664
}

loc_80587E60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80587E6C;
    }
}

loc_80587E64:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 652));
    goto loc_80587E78;
}

loc_80587E6C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 136));
}

loc_80587E78:
{
    r3 = MemoryInline::FlatRead32(r30);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + 4), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r8 + 4));
    r3 = (r0 & 16);
}

loc_80587E98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80587EAC;
    }
}

loc_80587E9C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r8 + 8));
    r3 = (r3 & 27);
}

loc_80587EA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80587EAC;
    }
}

loc_80587EA8:
{
    r4 = 0;
}

loc_80587EAC:
{
}

loc_80587EB0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80587ECC;
    }
}

loc_80587EB4:
{
    r3 = 34340864;
    r4 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r8 + 12));
    r3 = (r3 + 256);
    r3 = (r4 & r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80587ECC;
    }
}

loc_80587EC8:
{
    r7 = 0;
}

loc_80587ECC:
{
}

loc_80587ED0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80587EEC;
    }
}

loc_80587ED4:
{
    r3 = 458752;
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r8 + 20));
    r3 = (r3 + 20096);
    r3 = (r4 & r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80587EEC;
    }
}

loc_80587EE8:
{
    r6 = 0;
}

loc_80587EEC:
{
}

loc_80587EF0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80587F04;
    }
}

loc_80587EF4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r8 + 8));
    r3 = (r3 & 1024);
}

loc_80587EFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80587F04;
    }
}

loc_80587F00:
{
    r5 = 0;
}

loc_80587F04:
{
}

loc_80587F08:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80587F40;
    }
}

loc_80587F0C:
{
    r3 = (r0 & 536870912);
    r3_mrot_1 = (r0 & 32768);
    r3_mdest_1 = (r3 & -32769);
    r3 = (r3_mdest_1 | r3_mrot_1);
}

loc_80587F14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80587F40;
    }
}

loc_80587F18:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r8 + 8));
    r3 = (r4 & 268435456);
    r3_mrot_2 = (r4 & 1024);
    r3_mdest_2 = (r3 & -1025);
    r3 = (r3_mdest_2 | r3_mrot_2);
}

loc_80587F24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80587F40;
    }
}

loc_80587F28:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r8 + 12));
    r3 = (r3 & 134217728);
}

loc_80587F30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80587F40;
    }
}

loc_80587F34:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r8 + 16));
    r3 = (r3 & 56);
}

loc_80587F3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80587F58;
    }
}

loc_80587F40:
{
    r3 = MemoryInline::FlatRead32((r30 + 704));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 660));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 660), f0.d);
    goto loc_80588094;
}

loc_80587F58:
{
    r3 = (r0 & 268435456);
    r3_mrot_3 = (r0 & 8);
    r3_mdest_3 = (r3 & -9);
    r3 = (r3_mdest_3 | r3_mrot_3);
}

loc_80587F60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80588034;
    }
}

loc_80587F64:
{
    r0 = MemoryInline::FlatRead32((r30 + 204));
    r3 = MemoryInline::FlatRead32((r30 + 704));
}

loc_80587F70:
{
    f30.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80587F8C;
    }
}

loc_80587F80:
{
    f0.d = f30.d;
    f30.d = (-(f31.d));
    f31.d = (-(f0.d));
}

loc_80587F8C:
{
}

loc_80587F90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80587FE4;
    }
}

loc_80587F94:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80587F9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80587FC0;
    }
}

loc_80587FA0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 660));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 660), f0.d);
    goto loc_80588094;
}

loc_80587FC0:
{
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 660));
    r3 = MemoryInline::FlatRead32((r30 + 704));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 660), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = (-(f0.d));
    f29.d = PpcFmulsInline(f0.d, f2.d);
    goto loc_80588094;
}

loc_80587FE4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80587FEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80588010;
    }
}

loc_80587FF0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r31 + 120));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 660));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 660), f0.d);
    goto loc_80588094;
}

loc_80588010:
{
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 660));
    r3 = MemoryInline::FlatRead32((r30 + 704));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 660), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = (-(f0.d));
    f29.d = PpcFmulsInline(f0.d, f2.d);
    goto loc_80588094;
}

loc_80588034:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r31 + 176));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8058803C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8058805C;
    }
}

loc_80588040:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 660));
    r3 = MemoryInline::FlatRead32((r30 + 704));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f27.d));
    MemoryInline::FlatWriteFloat32((r30 + 660), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f29.d = (-(f0.d));
    goto loc_80588094;
}

loc_8058805C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 256u, (r31 + 256));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80588064:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80588080;
    }
}

loc_80588068:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 660));
    r3 = MemoryInline::FlatRead32((r30 + 704));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    MemoryInline::FlatWriteFloat32((r30 + 660), f0.d);
    f29.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80588094;
}

loc_80588080:
{
    r3 = MemoryInline::FlatRead32((r30 + 704));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 660));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 660), f0.d);
}

loc_80588094:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 660));
    r0 = 0;
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_805880A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805880B0;
    }
}

loc_805880A4:
{
    MemoryInline::FlatWriteFloat32((r30 + 660), f30.d);
    r0 = 1;
    goto loc_805880C0;
}

loc_805880B0:
{
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_805880B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805880C0;
    }
}

loc_805880B8:
{
    MemoryInline::FlatWriteFloat32((r30 + 660), f31.d);
    r0 = 1;
}

loc_805880C0:
{
}

loc_805880C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80588118;
    }
}

loc_805880C8:
{
    r3 = r30;
    // inline leaf 0x80590CBC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 204);
    // end of inlined leaf 0x80590CBC
    f1.d = f29.d;
    r4 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f1.d = MemoryInline::FlatReadFloat32((r3 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
}

loc_80588118:
{
    r3 = MemoryInline::FlatRead32(r30);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 268435456);
    r0_mrot_0 = (r3 & 8);
    r0_mdest_0 = (r0 & -9);
    r0 = (r0_mdest_0 | r0_mrot_0);
}

loc_80588130:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058813C;
    }
}

loc_80588134:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 260u, (r31 + 260));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_8058813C:
{
    r0 = (r3 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80588140:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80588150;
    }
}

loc_80588148:
{
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 23260));
}

loc_80588150:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 660));
    f27.d = PpcFmulsInline(f28.d, f1.d);
    r3 = r30;
    f28.d = PpcFmulsInline(f0.d, f2.d);
    ctx->lr = 0x80588164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8057D1D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
    r3 = r30;
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f28.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f2.d = MemoryInline::FlatReadFloat32((r3 + 228));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f28.d));
    MemoryInline::FlatWriteFloat32((r3 + 228), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 232));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 232), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 236));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    r3 = r30;
    ctx->lr = 0x805881B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805869DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 68));
    r0 = MemoryInline::FlatRead32((r30 + 72));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r0 = MemoryInline::FlatRead32((r30 + 76));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 & 134217728);
    r0_mrot_1 = (r3 & 1536);
    r0_mdest_1 = (r0 & -1537);
    r0 = (r0_mdest_1 | r0_mrot_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805881DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805882C4;
    }
}

loc_805881E0:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 176));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f6.d = PpcFmulsInline(f1.d, f2.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805881F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80588200;
    }
}

loc_805881FC:
{
    f6.d = f0.d;
}

loc_80588200:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    SetCRFloatResident(cr, 0, f0.d, f6.d);
}

loc_80588208:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80588210;
    }
}

loc_8058820C:
{
    f6.d = f0.d;
}

loc_80588210:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r4 = 0x802A0000u;
    f12.d = MemoryInline::FlatReadFloat32((r30 + 68));
    r3 = (r4 + 16688);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f11.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f4.d = PpcFmulsInline(f6.d, f12.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f6.d, f11.d);
    f9.d = PpcFmulsInline(f5.d, f1.d);
    f10.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f8.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = PpcFmulsInline(f6.d, f10.d);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 32), f4.d);
    f7.d = PpcFmulsInline(f5.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 36), f2.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f9.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f8.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 40), f3.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 20), f9.d);
    f2.d = PpcFmulsInline(f6.d, f6.d);
    f1.d = PpcFmulsInline(f5.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 24), f8.d);
    f3.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 28), f7.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r1 + 44), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r1 + 48), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r1 + 52), f4.d);
    }
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8058829C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805882A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805882B8;
    }
}

loc_805882AC:
{
    r3 = (r1 + 44);
    ctx->lr = 0x805882B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    goto loc_805882C4;
}

loc_805882B8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f12.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f11.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f10.d);
}

loc_805882C4:
{
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 124u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r1 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 384), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r1 + 48));
    MemoryInline::FlatWriteFloat32((r3 + 388), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r1 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 392), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 100u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 84u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 68u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 52u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 36u, (r1 + 80));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 28u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 76));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r1 + 72));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 120u, (r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00001FF gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0xF8001FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80587D68 func_80587D68 preserves=false fpr_mask=0xF8000000
