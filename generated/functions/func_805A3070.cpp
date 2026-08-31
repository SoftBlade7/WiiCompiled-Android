#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A3070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A3070;

loc_805A3070:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80890000u;
    r30 = (r30 + 8728);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    r5 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r5 & 8);
}

loc_805A30B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A30C4;
    }
}

loc_805A30BC:
{
    r0 = (r5 & 524288);
}

loc_805A30C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A3284;
    }
}

loc_805A30C4:
{
    r3 = r29;
    // inline leaf 0x805909F4 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 204));
    // end of inlined leaf 0x805909F4
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = r29;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 244), 0, 116u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 108u, (r30 + 352));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r30 + 328));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    // inline leaf 0x80590A10 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A10
}

loc_805A30FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_805A3108;
    }
}

loc_805A3100:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r30 + 332));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_805A3108:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 244));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r31 + 244), f0.d);
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 16);
}

loc_805A3124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A3130;
    }
}

loc_805A3128:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 244));
    goto loc_805A3134;
}

loc_805A3130:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r30 + 336));
}

loc_805A3134:
{
    r4 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 300));
    r3 = (r4 + 16688);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 304));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 308));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r30 + 332));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_805A3170:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A317C;
    }
}

loc_805A3174:
{
    f30.d = f0.d;
    goto loc_805A318C;
}

loc_805A317C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 248));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_805A3184:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A318C;
    }
}

loc_805A3188:
{
    f30.d = f0.d;
}

loc_805A318C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 248));
    r0 = 0;
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_805A3198:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A31B4;
    }
}

loc_805A31A0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r30 + 332));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_805A31A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A31B4;
    }
}

loc_805A31B0:
{
    r0 = 1;
}

loc_805A31B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A31B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A31D8;
    }
}

loc_805A31BC:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22536);
    r4 = 286;
    r5 = (r5 + 22496);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x805A31D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
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
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
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
    xer = ctx->xer;
}

loc_805A31D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 248));
    r0 = 0;
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_805A31E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A3200;
    }
}

loc_805A31EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 332));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_805A31F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A3200;
    }
}

loc_805A31FC:
{
    r0 = 1;
}

loc_805A3200:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A3204:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A3224;
    }
}

loc_805A3208:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22480);
    r4 = 287;
    r5 = (r5 + 22436);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x805A3224u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
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
    xer = ctx->xer;
}

loc_805A3224:
{
    f1.d = f30.d;
    ctx->lr = 0x805A322Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 340));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 344));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A3248:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A325C;
    }
}

loc_805A324C:
{
    f1.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 240));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_805A325C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 244));
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_805A3264:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A3270;
    }
}

loc_805A3268:
{
    MemoryInline::FlatWriteFloat32((r31 + 244), f31.d);
    goto loc_805A32E8;
}

loc_805A3270:
{
    f0.d = (-(f31.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A3278:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A32E8;
    }
}

loc_805A327C:
{
    MemoryInline::FlatWriteFloat32((r31 + 244), f0.d);
    goto loc_805A32E8;
}

loc_805A3284:
{
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 244));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A3290:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A32E8;
    }
}

loc_805A3294:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 16);
}

loc_805A329C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A32A8;
    }
}

loc_805A32A0:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 268));
    goto loc_805A32AC;
}

loc_805A32A8:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 248));
}

loc_805A32AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 244));
    f1.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A32B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A32D4;
    }
}

loc_805A32BC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 244), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A32C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A32E8;
    }
}

loc_805A32CC:
{
    MemoryInline::FlatWriteFloat32((r3 + 244), f1.d);
    goto loc_805A32E8;
}

loc_805A32D4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 244), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A32E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A32E8;
    }
}

loc_805A32E4:
{
    MemoryInline::FlatWriteFloat32((r3 + 244), f1.d);
}

loc_805A32E8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805A3070 func_805A3070 preserves=false fpr_mask=0xC0000000
