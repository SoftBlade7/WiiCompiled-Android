#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071F404(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8071F404;

loc_8071F404:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -256), 0, 264u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 260u, (r1 + 260), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 240u, (r1 + 240), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolved32(guest_range_1, 236u, (r1 + 236), r31);
    r31 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 232u, (r1 + 232), r30);
    r30 = 0x808D0000u;
    r30 = (r30 + -27448);
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r1 + 228), r29);
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r5 = MemoryInline::FlatRead32(r3);
    r4 = 0x808A0000u;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 168u, (r1 + 168), r0);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 76));
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r1 + 164), r5);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 172u, (r1 + 172), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8380));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f3.d = std::fabs(f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8071F480:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071F48C;
    }
}

loc_8071F484:
{
    f4.d = f0.d;
    goto loc_8071F4A0;
}

loc_8071F48C:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8376));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8071F498:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071F4A0;
    }
}

loc_8071F49C:
{
    f4.d = f0.d;
}

loc_8071F4A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    r3 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 332));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8380));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8071F4C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071F4D4;
    }
}

loc_8071F4CC:
{
    f31.d = f0.d;
    goto loc_8071F4E8;
}

loc_8071F4D4:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8376));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8071F4E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071F4E8;
    }
}

loc_8071F4E4:
{
    f31.d = f0.d;
}

loc_8071F4E8:
{
    r3 = (r1 + 152);
    r4 = (r1 + 164);
    r5 = (r31 + 244);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + -240), 0, 252u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 248u, (r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 244u, (r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 240u, r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 168));
    r3 = (r1 + 68);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 244u, (r31 + 248));
    r4 = (r31 + 28);
    r5 = (r1 + 152);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r3 = (r1 + 140);
    r4 = (r1 + 68);
    r5 = (r31 + 4);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r5 = MemoryInline::FlatRead32((r1 + 140));
    r3 = (r1 + 128);
    r4 = MemoryInline::FlatRead32((r1 + 144));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    MemoryInline::FlatWriteRam32((r1 + 128), r5);
    MemoryInline::FlatWriteRam32((r1 + 132), r4);
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    ctx->lr = 0x8071F54Cu;
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 48));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071F554:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071F560;
    }
}

loc_8071F558:
{
    f4.d = MemoryInline::FlatReadFloat32((r30 + 56));
    goto loc_8071F564;
}

loc_8071F560:
{
    f4.d = MemoryInline::FlatReadFloat32((r30 + 52));
}

loc_8071F564:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
    r0 = MemoryInline::FlatRead8((r31 + 320));
}

loc_8071F590:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8071F5EC;
    }
}

loc_8071F594:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 324));
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8380));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 324), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071F5B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071F5B8;
    }
}

loc_8071F5B4:
{
    MemoryInline::FlatWriteFloat32((r31 + 324), f0.d);
}

loc_8071F5B8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 324));
    r3 = (r1 + 56);
    r4 = (r1 + 128);
    r5 = (r1 + 140);
    ctx->lr = 0x8071F5CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8071F044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::FlatWriteFloat32((r31 + 256), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r31 + 260), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32((r31 + 264), f0.d);
    f31.d = MemoryInline::FlatReadFloat32((r30 + 60));
    goto loc_8071F6A0;
}

loc_8071F5EC:
{
    r3 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8376));
    MemoryInline::FlatWriteFloat32((r31 + 324), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071F600:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071F638;
    }
}

loc_8071F604:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 256));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 260));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 264));
    MemoryInline::FlatWriteFloat32((r31 + 256), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 260), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 264), f0.d);
    goto loc_8071F69C;
}

loc_8071F638:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 256));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f0.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8071F648:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071F654;
    }
}

loc_8071F64C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 256), f0.d);
}

loc_8071F654:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 260));
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8376));
    f1.d = PpcFmulsInline(f3.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071F66C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071F678;
    }
}

loc_8071F670:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 260), f0.d);
}

loc_8071F678:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 264));
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8376));
    f1.d = PpcFmulsInline(f3.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071F690:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071F69C;
    }
}

loc_8071F694:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 264), f0.d);
}

loc_8071F69C:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 64));
}

loc_8071F6A0:
{
    r3 = (r31 + 256);
    ctx->lr = 0x8071F6A8u;
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
    r0 = MemoryInline::FlatRead8((r31 + 328));
}

loc_8071F6B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8071F6C0;
    }
}

loc_8071F6B4:
{
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8071F6B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071F6C0;
    }
}

loc_8071F6BC:
{
    f1.d = f31.d;
}

loc_8071F6C0:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 256));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 260));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 264));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    r0 = MemoryInline::FlatRead8((r31 + 336));
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 256), f3.d);
}

loc_8071F6E4:
{
    MemoryInline::FlatWriteFloat32((r31 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 264), f0.d);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8071F72C;
    }
}

loc_8071F6F0:
{
    r0 = MemoryInline::FlatRead8((r31 + 337));
}

loc_8071F6F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8071F72C;
    }
}

loc_8071F6FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
}

loc_8071F72C:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8376));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    r0 = MemoryInline::FlatRead8((r31 + 337));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071F748:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071F780;
    }
}

loc_8071F74C:
{
    r3 = r31;
    r4 = (r31 + 88);
    ctx->lr = 0x8071F758u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80720024u>(ctx);
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = r31;
    r3 = (r1 + 44);
    r5 = (r31 + 88);
    ctx->lr = 0x8071F768u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807201B0u>(ctx);
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
}

loc_8071F780:
{
    r0 = MemoryInline::FlatRead8((r31 + 328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071F788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071F804;
    }
}

loc_8071F78C:
{
    r8 = 0x809C0000u;
    r8 = (r8 + 10444);
    r7 = MemoryInline::FlatRead32(r8);
    r4 = (r1 + 104);
    MemoryInline::FlatWriteRam32((r1 + 104), r7);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    r3 = (r31 + 88);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 108), r6);
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_1));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_2, f6.d);
    // end of inlined leaf 0x8019A91C
    r3 = (r1 + 32);
    r4 = (r31 + 4);
    r5 = (r31 + 256);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 20);
    r4 = (r1 + 32);
    r5 = (r1 + 116);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 8);
    r4 = (r1 + 20);
    r5 = (r1 + 104);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r4 = 0x808A0000u;
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8380));
    r4 = (r1 + 8);
    r5 = (r31 + 16);
    r6 = (r31 + 256);
    ctx->lr = 0x8071F804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->fpr[5].d = PPC_PsToScalarInline(ctx->fpr[5].d);
    ctx->fpr[6].d = PPC_PsToScalarInline(ctx->fpr[6].d);
    ctx->fpr[8].d = PPC_PsToScalarInline(ctx->fpr[8].d);
    ctx->fpr[9].d = PPC_PsToScalarInline(ctx->fpr[9].d);
    ctx->fpr[10].d = PPC_PsToScalarInline(ctx->fpr[10].d);
    ctx->fpr[11].d = PPC_PsToScalarInline(ctx->fpr[11].d);
    ctx->fpr[12].d = PPC_PsToScalarInline(ctx->fpr[12].d);
    InvokeDirectCpu<0x8071FC80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8071F804:
{
    r0 = MemoryInline::FlatRead8((r31 + 337));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071F80C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071F840;
    }
}

loc_8071F810:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8376));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 264), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 260), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 256), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 288), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 284), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 280), f0.d);
    goto loc_8071F8E0;
}

loc_8071F840:
{
    r0 = MemoryInline::FlatRead8((r31 + 336));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071F848:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071F8B0;
    }
}

loc_8071F84C:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 268));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 272));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8376));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 276));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f6.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    MemoryInline::FlatWrite8((r31 + 336), static_cast<uint8_t>(r0));
    goto loc_8071F8E0;
}

loc_8071F8B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 256));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 260));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 264));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
}

loc_8071F8E0:
{
    r3 = (r1 + 80);
    r4 = (r31 + 4);
    r5 = (r1 + 116);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = r31;
    r4 = (r31 + 40);
    ctx->lr = 0x8071F8FCu;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807202BCu>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 356));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071F904:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071F910;
    }
}

loc_8071F908:
{
    r4 = (r31 + 136);
    ctx->lr = 0x8071F910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80720A20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8071F910:
{
    r4 = 0x809C0000u;
    r3 = (r1 + 176);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10492));
    r4 = (r4 + 10492);
    MemoryInline::FlatWriteFloat32((r31 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteFloat32((r31 + 84), f0.d);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r29 = (r31 + 40);
    r30 = 0;
}

loc_8071F958:
{
    r3 = (r1 + 176);
    r4 = r29;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    r30 = (r30 + 1);
    r29 = (r29 + 48);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(3));
}

loc_8071F974:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8071F958;
    }
}

loc_8071F978:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 164), 0, 100u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 176));
    MemoryInline::FlatWriteFloat32((r31 + 184), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 180));
    MemoryInline::FlatWriteFloat32((r31 + 188), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 184));
    MemoryInline::FlatWriteFloat32((r31 + 192), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r1 + 188));
    MemoryInline::FlatWriteFloat32((r31 + 196), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 192));
    MemoryInline::FlatWriteFloat32((r31 + 200), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 196));
    MemoryInline::FlatWriteFloat32((r31 + 204), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r1 + 200));
    MemoryInline::FlatWriteFloat32((r31 + 208), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r1 + 204));
    MemoryInline::FlatWriteFloat32((r31 + 212), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r1 + 208));
    MemoryInline::FlatWriteFloat32((r31 + 216), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 48u, (r1 + 212));
    MemoryInline::FlatWriteFloat32((r31 + 220), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 52u, (r1 + 216));
    MemoryInline::FlatWriteFloat32((r31 + 224), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 56u, (r1 + 220));
    MemoryInline::FlatWriteFloat32((r31 + 228), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 24), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 164));
    MemoryInline::FlatWriteFloat32((r31 + 244), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 168));
    MemoryInline::FlatWriteFloat32((r31 + 248), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 172));
    MemoryInline::FlatWriteFloat32((r31 + 252), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 76u, (r1 + 240));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 68u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_3, 72u, (r1 + 236));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r1 + 232));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r1 + 228));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 96u, (r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8071F404 func_8071F404 preserves=false fpr_mask=0x80000000
