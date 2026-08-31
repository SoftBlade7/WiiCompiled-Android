#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080EDAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8080EDAC;

loc_8080EDAC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r0 = 1127219200;
    r5 = 0x809C0000u;
    f30.d = f1.d;
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -19864);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
    r30 = 0x808D0000u;
    r30 = (r30 + 24136);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
    r28 = r3;
    r6 = MemoryInline::FlatRead8((r5 + 17160));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r0);
}

loc_8080EE08:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8080EE18;
    }
}

loc_8080EE10:
{
    r5 = MemoryInline::FlatRead32((r30 + 64));
    goto loc_8080EE58;
}

loc_8080EE18:
{
    r7 = MemoryInline::FlatRead16(r30);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r5 = (r7 + r3);
    r3 = (r0 + r5);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
}

loc_8080EE3C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_8080EE48;
    }
}

loc_8080EE40:
{
    r5 = 1;
    goto loc_8080EE58;
}

loc_8080EE48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_8080EE4C:
{
    r5 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080EE58;
    }
}

loc_8080EE54:
{
    r5 = 2;
}

loc_8080EE58:
{
}

loc_8080EE5C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8080EE6C;
    }
}

loc_8080EE60:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17156));
    goto loc_8080EEAC;
}

loc_8080EE6C:
{
    r7 = MemoryInline::FlatRead16(r30);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r6 = (r7 + r3);
    r3 = (r0 + r6);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r3 = (r4 - r0);
}

loc_8080EE90:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r7))) {
        goto loc_8080EE98;
    }
}

loc_8080EE94:
{
    goto loc_8080EEAC;
}

loc_8080EE98:
{
}

loc_8080EE9C:
{
    r0 = (r3 - r6);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r6))) {
        goto loc_8080EEA8;
    }
}

loc_8080EEA4:
{
    r0 = (r3 - r7);
}

loc_8080EEA8:
{
    r3 = r0;
}

loc_8080EEAC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 132u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 32));
    SetCRFloatResident(cr, 0, f2.d, f31.d);
}

loc_8080EEB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080EEC4;
    }
}

loc_8080EEBC:
{
    f2.d = f31.d;
    goto loc_8080EED4;
}

loc_8080EEC4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r31 + 120));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8080EECC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8080EED4;
    }
}

loc_8080EED0:
{
    f2.d = f0.d;
}

loc_8080EED4:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 120u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r31 + 120));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r31 + 124));
        }
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8080EEE4:
{
    MemoryInline::FlatWriteRamFloat32((r30 + 32), f2.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f4.d = PpcFmulsInline(f0.d, f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080EFB0;
    }
}

loc_8080EEF4:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r31 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_8080EF0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080EF3C;
    }
}

loc_8080EF10:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 128));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f5.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080EFB0;
}

loc_8080EF3C:
{
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8080EF64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080EF80;
    }
}

loc_8080EF68:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 128));
    f1.d = PpcFmulsInline(f0.d, f3.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080EFB0;
}

loc_8080EF80:
{
    r0 = (r4 - r3);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 128));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f31.d = PpcFmulsInline(f0.d, f1.d);
}

loc_8080EFB0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 140));
    r0 = (r29 ^ -2147483648);
    f6.d = MemoryInline::FlatReadFloat32((r31 + 136));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f4.d = MemoryInline::FlatReadFloat32((r28 + 184));
    f2.d = MemoryInline::FlatReadFloat64((r31 + 88));
    f5.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 132));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f5.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 144));
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f2.d = PpcFmulsInline(f30.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
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
    f2.d = PpcFmulsInline(f30.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FF gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0xC000003F fpr_write=0xC000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8080EDAC func_8080EDAC preserves=false fpr_mask=0xC0000000
