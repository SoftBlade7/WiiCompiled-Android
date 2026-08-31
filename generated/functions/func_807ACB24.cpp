#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807ACB24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807ACB24;

loc_807ACB24:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807ACB4C:
{
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 23288);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807ACC98;
    }
}

loc_807ACB64:
{
    r0 = MemoryInline::FlatRead8((r3 + 681));
}

loc_807ACB6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807ACB98;
    }
}

loc_807ACB70:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 732));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 220));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 216));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807ACB84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807ACB8C;
    }
}

loc_807ACB88:
{
    goto loc_807ACB90;
}

loc_807ACB8C:
{
    f2.d = f0.d;
}

loc_807ACB90:
{
    MemoryInline::FlatWriteFloat32((r3 + 732), f2.d);
    goto loc_807ACC74;
}

loc_807ACB98:
{
    r3 = 0x809C0000u;
    f31.d = MemoryInline::FlatReadFloat32((r31 + 224));
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    r4 = MemoryInline::FlatRead8((r30 + 108));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f3.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    r3 = (r1 + 24);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f3.d);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl2_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl2_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl2_cont_8019AC68;
}

loc_inl2_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl2_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    f30.d = f1.d;
    r3 = MemoryInline::FlatRead32((r30 + 640));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f3.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    r3 = (r1 + 12);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl4_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl4_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl4_cont_8019AC68;
}

loc_inl4_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl4_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    f0.d = MemoryInline::FlatReadFloat32((r31 + 228));
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807ACC2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807ACC34;
    }
}

loc_807ACC30:
{
    goto loc_807ACC38;
}

loc_807ACC34:
{
    f2.d = f0.d;
}

loc_807ACC38:
{
    f1.d = f31.d;
    f29.d = MemoryInline::FlatReadFloat32((r31 + 232));
    ctx->lr = 0x807ACC44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807DF7B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f3.d = PpcFmulsInline(f29.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 216));
    f1.d = f31.d;
    f2.d = f30.d;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    ctx->lr = 0x807ACC5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807DF7B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f0.d = PpcFmulsInline(f29.d, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_807ACC64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807ACC6C;
    }
}

loc_807ACC68:
{
    goto loc_807ACC70;
}

loc_807ACC6C:
{
    f0.d = f31.d;
}

loc_807ACC70:
{
    MemoryInline::FlatWriteFloat32((r30 + 732), f0.d);
}

loc_807ACC74:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 736));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 236));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807ACC88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807ACC90;
    }
}

loc_807ACC8C:
{
    goto loc_807ACC94;
}

loc_807ACC90:
{
    f2.d = f0.d;
}

loc_807ACC94:
{
    MemoryInline::FlatWriteFloat32((r30 + 736), f2.d);
}

loc_807ACC98:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 84));
    r3 = MemoryInline::FlatRead16((r30 + 740));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 132));
    r0 = (r3 + 1500);
    f31.d = MemoryInline::FlatReadFloat32((r30 + 732));
    MemoryInline::FlatWrite16((r30 + 740), static_cast<uint16_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 132), f0.d);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 3u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 240));
    f1.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f1.d));
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
    InvokeDirectCpu<0x80085110u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 736));
    r0 = 1127219200;
    r3 = MemoryInline::FlatRead32((r30 + 352));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 272u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 244u, (r31 + 244));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    r3 = (r3 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 132));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_807ACD18:
{
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 264u, (r31 + 264));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807ACD34;
    }
}

loc_807ACD2C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 248u, (r31 + 248));
    goto loc_807ACD4C;
}

loc_807ACD34:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 248u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 252u, (r31 + 252));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 248u, (r31 + 248));
        }
    }
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_807ACD4C:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 248u, (r31 + 248));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807ACD54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807ACD5C;
    }
}

loc_807ACD58:
{
    goto loc_807ACD70;
}

loc_807ACD5C:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 256u, (r31 + 256));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807ACD64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807ACD6C;
    }
}

loc_807ACD68:
{
    goto loc_807ACD70;
}

loc_807ACD6C:
{
    f4.d = f0.d;
}

loc_807ACD70:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 260u, (r31 + 260));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 236u, (r31 + 236));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_807ACD84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807ACD90;
    }
}

loc_807ACD88:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 248u, (r31 + 248));
    goto loc_807ACDA8;
}

loc_807ACD90:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 248u, (r31 + 248));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_807ACDA8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 248u, (r31 + 248));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807ACDB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807ACDB8;
    }
}

loc_807ACDB4:
{
    goto loc_807ACDCC;
}

loc_807ACDB8:
{
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807ACDBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807ACDC4;
    }
}

loc_807ACDC0:
{
    goto loc_807ACDC8;
}

loc_807ACDC4:
{
    f4.d = f0.d;
}

loc_807ACDC8:
{
    f1.d = f4.d;
}

loc_807ACDCC:
{
    f3.d = PpcFmulsInline(f31.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 132));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 128), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 132), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 136), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001F gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0xE000001F fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807ACB24 func_807ACB24 preserves=false fpr_mask=0xE0000000
