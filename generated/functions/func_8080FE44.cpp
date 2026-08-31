#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080FE44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8080FE44;

loc_8080FE44:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 96);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    r31 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32(r6);
    r30 = 0x808D0000u;
    f2.d = PpcFmulsInline(f1.d, f1.d);
    r31 = (r31 + -19864);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r27 = r3;
    r28 = r5;
    f30.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    r29 = r6;
    r30 = (r30 + 24136);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8080FEA8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080FECC;
    }
}

loc_8080FEB0:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8080FECCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    f4 = ctx->fpr[4];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8080FECC:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f30.d, f31.d);
}

loc_8080FED4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080FEE0;
    }
}

loc_8080FEDC:
{
    goto loc_8080FEEC;
}

loc_8080FEE0:
{
    f1.d = f30.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f31.d = PpcFmulsInline(f30.d, f1.d);
}

loc_8080FEEC:
{
    r5 = 0x802A0000u;
    r5 = (r5 + 16640);
    r4 = MemoryInline::FlatRead32(r5);
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r27 + 4), r0);
    MemoryInline::FlatWrite32(r27, r4);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r27 + 8), r0);
    r5 = MemoryInline::FlatRead8((r3 + 17160));
}

loc_8080FF14:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8080FF20;
    }
}

loc_8080FF18:
{
    r26 = MemoryInline::FlatRead32((r30 + 64));
    goto loc_8080FF60;
}

loc_8080FF20:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r6 + r3);
    r3 = (r0 + r4);
    r0 = PPC_Divw(static_cast<int32_t>(r28), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r28 - r0);
}

loc_8080FF44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r6))) {
        goto loc_8080FF50;
    }
}

loc_8080FF48:
{
    r26 = 1;
    goto loc_8080FF60;
}

loc_8080FF50:
{
}

loc_8080FF54:
{
    r26 = 0;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_8080FF60;
    }
}

loc_8080FF5C:
{
    r26 = 2;
}

loc_8080FF60:
{
}

loc_8080FF64:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8080FF74;
    }
}

loc_8080FF68:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 17156));
    goto loc_8080FFB4;
}

loc_8080FF74:
{
    r6 = MemoryInline::FlatRead16(r30);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r5 = (r6 + r3);
    r3 = (r0 + r5);
    r0 = PPC_Divw(static_cast<int32_t>(r28), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r4 = (r28 - r0);
}

loc_8080FF98:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r6))) {
        goto loc_8080FFA0;
    }
}

loc_8080FF9C:
{
    goto loc_8080FFB4;
}

loc_8080FFA0:
{
}

loc_8080FFA4:
{
    r0 = (r4 - r5);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_8080FFB0;
    }
}

loc_8080FFAC:
{
    r0 = (r4 - r6);
}

loc_8080FFB0:
{
    r4 = r0;
}

loc_8080FFB4:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = 1127219200;
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 88));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8080FFD4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 168));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f30.d = MemoryInline::FlatReadFloat32((r31 + 48));
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80810010;
    }
}

loc_8080FFFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(1));
}

loc_80810000:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081004C;
    }
}

loc_80810004:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(2));
}

loc_80810008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80810040;
    }
}

loc_8081000C:
{
    goto loc_8081004C;
}

loc_80810010:
{
    f1.d = PpcFmulsInline(f1.d, f29.d);
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_80810018:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80810024;
    }
}

loc_8081001C:
{
    f1.d = f30.d;
    goto loc_80810034;
}

loc_80810024:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8081002C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80810034;
    }
}

loc_80810030:
{
    f1.d = f0.d;
}

loc_80810034:
{
    f30.d = f1.d;
    goto loc_8081004C;
}

loc_80810040:
{
    f1.d = PpcFmulsInline(f1.d, f29.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_8081004C:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    r3 = r27;
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32(r27, f2.d);
    MemoryInline::FlatWriteFloat32((r27 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    ctx->lr = 0x80810074u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80810078:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(2))) {
        goto loc_8081009C;
    }
}

loc_8081007C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_80810084:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8081009C;
    }
}

loc_80810088:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32(r27, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 8), f1.d);
}

loc_8081009C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 172));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_808100A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808100B0;
    }
}

loc_808100A8:
{
    f31.d = f0.d;
    goto loc_808100C0;
}

loc_808100B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 112));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_808100B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808100C0;
    }
}

loc_808100BC:
{
    f31.d = f0.d;
}

loc_808100C0:
{
    f1.d = f30.d;
    r4 = r27;
    r3 = (r1 + 44);
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
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    r3 = (r1 + 32);
    r4 = (r1 + 44);
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
    f1.d = MemoryInline::FlatReadFloat32((r31 + 108));
    r3 = (r1 + 20);
    r4 = (r1 + 32);
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
    f1.d = f31.d;
    r3 = (r1 + 8);
    r4 = (r1 + 20);
    // inline leaf 0x806A62A4 (13 guest instruction(s))
    r5 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -10588));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f1.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x806A62A4
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r11 = (r1 + 96);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8080FE44 func_8080FE44 preserves=false fpr_mask=0xE0000000
