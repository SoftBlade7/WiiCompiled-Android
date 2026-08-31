#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80088AE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80088AE0;

loc_80088AE0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r0 = 1127219200;
    f28.d = MemoryInline::FlatReadFloat32((r2 + -28820));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    f29.d = MemoryInline::FlatReadFloat32((r2 + -28824));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    r30 = 0;
    f31.d = MemoryInline::FlatReadFloat64((r2 + -28816));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    r29 = r3;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -28808));
    r31 = r29;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
}

loc_80088B40:
{
    r3 = MemoryInline::FlatRead32((r31 + 144));
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r31 + 140));
}

loc_80088B50:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80088B70;
    }
}

loc_80088B54:
{
    r3 = MemoryInline::FlatRead32((r31 + 144));
    r0 = MemoryInline::FlatRead32((r31 + 140));
}

loc_80088B60:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80088B6C;
    }
}

loc_80088B64:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 144), r0);
}

loc_80088B6C:
{
    r4 = 1;
}

loc_80088B70:
{
    r3 = MemoryInline::FlatRead32((r31 + 96));
    r0 = MemoryInline::FlatRead32((r31 + 92));
}

loc_80088B7C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80088BB8;
    }
}

loc_80088B80:
{
    r3 = MemoryInline::FlatRead32((r31 + 96));
    r0 = MemoryInline::FlatRead32((r31 + 92));
}

loc_80088B8C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80088B98;
    }
}

loc_80088B90:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 96), r0);
}

loc_80088B98:
{
    r3 = MemoryInline::FlatRead32((r31 + 96));
    r0 = MemoryInline::FlatRead32((r31 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80088BA4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80088BB4;
    }
}

loc_80088BA8:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x80088BB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800894D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80088BB4:
{
    r4 = 1;
}

loc_80088BB8:
{
}

loc_80088BBC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80088CF0;
    }
}

loc_80088BC0:
{
    r3 = MemoryInline::FlatRead32((r31 + 140));
    r0 = MemoryInline::FlatRead32((r31 + 144));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -28820));
}

loc_80088BD0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80088BDC;
    }
}

loc_80088BD4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 136));
    goto loc_80088C14;
}

loc_80088BDC:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r3 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 136));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 132));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_80088C14:
{
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_80088C18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80088C24;
    }
}

loc_80088C1C:
{
    f0.d = f28.d;
    goto loc_80088C30;
}

loc_80088C24:
{
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_80088C28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80088C30;
    }
}

loc_80088C2C:
{
    f0.d = f29.d;
}

loc_80088C30:
{
    r3 = MemoryInline::FlatRead32((r31 + 92));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r0 = MemoryInline::FlatRead32((r31 + 96));
}

loc_80088C40:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80088C4C;
    }
}

loc_80088C44:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 88));
    goto loc_80088C84;
}

loc_80088C4C:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r3 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_80088C84:
{
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_80088C88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80088C94;
    }
}

loc_80088C8C:
{
    f0.d = f28.d;
    goto loc_80088CA0;
}

loc_80088C94:
{
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_80088C98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80088CA0;
    }
}

loc_80088C9C:
{
    f0.d = f29.d;
}

loc_80088CA0:
{
    f4.d = PpcFmulsInline(f4.d, f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80088CA8:
{
    f0.d = PpcFmulsInline(f30.d, f4.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80088CD0;
    }
}

loc_80088CBC:
{
}

loc_80088CC0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_80088CDC;
    }
}

loc_80088CC4:
{
}

loc_80088CC8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(2))) {
        goto loc_80088CE8;
    }
}

loc_80088CCC:
{
    goto loc_80088CF0;
}

loc_80088CD0:
{
    r3 = (r0 & 65535);
    // inline leaf 0x80126620 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26396), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126620
    goto loc_80088CF0;
}

loc_80088CDC:
{
    r3 = (r0 & 65535);
    // inline leaf 0x80126628 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26398), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126628
    goto loc_80088CF0;
}

loc_80088CE8:
{
    r3 = (r0 & 65535);
    // inline leaf 0x80126630 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r13 + -26400), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80126630
}

loc_80088CF0:
{
    r30 = (r30 + 1);
    r31 = (r31 + 16);
}

loc_80088CFC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_80088B40;
    }
}

loc_80088D00:
{
    r3 = MemoryInline::FlatRead32((r29 + 40));
    r0 = MemoryInline::FlatRead32((r29 + 36));
}

loc_80088D0C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80088D34;
    }
}

loc_80088D10:
{
    r3 = MemoryInline::FlatRead32((r29 + 40));
    r0 = MemoryInline::FlatRead32((r29 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80088D1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80088D28;
    }
}

loc_80088D20:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 40), r0);
}

loc_80088D28:
{
    ctx->lr = 0x80088D2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AC440u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = 8;
    ctx->lr = 0x80088D34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ACB70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80088D34:
{
    r3 = MemoryInline::FlatRead32((r29 + 72));
    r0 = MemoryInline::FlatRead32((r29 + 68));
}

loc_80088D40:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80088D5C;
    }
}

loc_80088D44:
{
    r3 = MemoryInline::FlatRead32((r29 + 72));
    r0 = MemoryInline::FlatRead32((r29 + 68));
}

loc_80088D50:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80088D5C;
    }
}

loc_80088D54:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 72), r0);
}

loc_80088D5C:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0 = MemoryInline::FlatRead32((r29 + 52));
}

loc_80088D68:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80088D84;
    }
}

loc_80088D6C:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0 = MemoryInline::FlatRead32((r29 + 52));
}

loc_80088D78:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80088D84;
    }
}

loc_80088D7C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 56), r0);
}

loc_80088D84:
{
    r3 = MemoryInline::FlatRead32((r29 + 52));
    r0 = MemoryInline::FlatRead32((r29 + 56));
}

loc_80088D90:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80088D9C;
    }
}

loc_80088D94:
{
    f5.d = MemoryInline::FlatReadFloat32((r29 + 48));
    goto loc_80088DD8;
}

loc_80088D9C:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r3 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -28816));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 44));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_80088DD8:
{
    r3 = MemoryInline::FlatRead32((r29 + 68));
    r0 = MemoryInline::FlatRead32((r29 + 72));
}

loc_80088DE4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80088DF0;
    }
}

loc_80088DE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 64));
    goto loc_80088E2C;
}

loc_80088DF0:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r3 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -28816));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 60));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_80088E2C:
{
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28820));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80088E38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80088E40;
    }
}

loc_80088E3C:
{
    goto loc_80088E54;
}

loc_80088E40:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28824));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80088E48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80088E50;
    }
}

loc_80088E4C:
{
    goto loc_80088E54;
}

loc_80088E50:
{
    f1.d = f0.d;
}

loc_80088E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28808));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
    r3 = (r3 & 65535);
    // inline leaf 0x80126608 (6 guest instruction(s))
}

loc_inl3_0x80126608:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(32768));
}

loc_inl3_0x8012660C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl3_0x80126618;
    }
}

loc_inl3_0x80126610:
{
    r3 = 65536;
    r3 = (r3 + -32768);
}

loc_inl3_0x80126618:
{
    MemoryInline::FlatWrite16((r13 + -26394), static_cast<uint16_t>(r3));
}

loc_inl3_cont_80126608:
{
    // end of inlined leaf 0x80126608
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 84u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 12u, (r1 + 48));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 40));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r1 + 116));
    r29 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80088AE0 func_80088AE0 preserves=false fpr_mask=0xF0000000
