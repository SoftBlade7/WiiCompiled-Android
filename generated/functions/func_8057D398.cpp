#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057D398(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r28_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8057D398;

loc_8057D398:
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
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + 22768);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r29);
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r28);
    r4 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 40));
    r0 = MemoryInline::FlatRead32((r5 + 44));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r4);
    }
    r0 = MemoryInline::FlatRead32((r5 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    // inline leaf 0x805902EC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 14));
    // end of inlined leaf 0x805902EC
    r5 = MemoryInline::FlatRead32(r29);
    r0 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r30 + 52));
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite8((r29 + 152), static_cast<uint8_t>(r0));
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r28 = (r28_rot_0 & 1);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057D438;
    }
}

loc_8057D42C:
{
    r3 = r29;
    // inline leaf 0x80591618 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // end of inlined leaf 0x80591618
    ctx->lr = 0x8057D438u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059D0C0u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_8057D438:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8057D43C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057D4B4;
    }
}

loc_8057D440:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 416));
    r3 = (r29 + 56);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 412));
    f6.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 420));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f7.d = MemoryInline::FlatReadFloat32((r29 + 408));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f1.d, f7.d);
    f0.d = PpcFmulsInline(f2.d, f7.d);
    f3.d = PpcFmulsInline(f3.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 64), f0.d);
    ctx->lr = 0x8057D4A0u;
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
    f30.d = MemoryInline::FlatReadFloat32((r29 + 408));
    r3 = r29;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    MemoryInline::FlatWriteFloat32((r3 + 376), f30.d);
    goto loc_8057D800;
}

loc_8057D4B4:
{
    r4 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r5 & 512);
}

loc_8057D4C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057D52C;
    }
}

loc_8057D4C8:
{
    r3 = MemoryInline::FlatRead32((r29 + 536));
    r0 = MemoryInline::FlatRead16((r30 + 60));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8057D4D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8057D52C;
    }
}

loc_8057D4D8:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r5 = (r29 + 56);
    MemoryInline::FlatWriteFloat32((r29 + 56), f2.d);
    r3 = (r29 + 80);
    r4 = (r29 + 92);
    r6 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r29 + 60), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r29 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 68), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 72), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 76), f0.d);
    ctx->lr = 0x8057D510u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r29 + 80);
    r3 = (r29 + 140);
    r5 = r4;
    // inline leaf 0x805AEB88 (18 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f2.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x805AEB88
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 152), static_cast<uint8_t>(r0));
    goto loc_8057D7F4;
}

loc_8057D52C:
{
    r0 = (r5 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D530:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057D54C;
    }
}

loc_8057D538:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 556));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057D544:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057D54C;
    }
}

loc_8057D548:
{
    r0 = 1;
}

loc_8057D54C:
{
}

loc_8057D550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057D560;
    }
}

loc_8057D554:
{
    r3 = MemoryInline::FlatRead32((r29 + 644));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_8057D7F4;
}

loc_8057D560:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8057D564:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057D7DC;
    }
}

loc_8057D568:
{
    r0 = MemoryInline::FlatRead16((r29 + 596));
    r28 = 0;
    r0 = (r0 & 64);
}

loc_8057D574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057D588;
    }
}

loc_8057D578:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 166));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8057D584:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8057D5E8;
    }
}

loc_8057D588:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 96));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 100));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057D5BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057D5E8;
    }
}

loc_8057D5C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 168));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057D5CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057D5E8;
    }
}

loc_8057D5D0:
{
    r3 = r29;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r0 & 4096);
}

loc_8057D5E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057D5E8;
    }
}

loc_8057D5E4:
{
    r28 = 1;
}

loc_8057D5E8:
{
}

loc_8057D5EC:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8057D60C;
    }
}

loc_8057D5F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r29 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r29 + 76), f0.d);
    goto loc_8057D624;
}

loc_8057D60C:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 68));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
}

loc_8057D624:
{
    r3 = MemoryInline::FlatRead32(r29);
    f30.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 & 512);
}

loc_8057D638:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057D678;
    }
}

loc_8057D63C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D644:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057D6E4;
    }
}

loc_8057D648:
{
    r0 = (r3 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D64C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057D6E4;
    }
}

loc_8057D650:
{
    r0 = (r3 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D654:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057D6E4;
    }
}

loc_8057D658:
{
    r0 = (r4 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D65C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057D6E4;
    }
}

loc_8057D660:
{
    r0 = (r4 & 8192);
}

loc_8057D664:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057D678;
    }
}

loc_8057D668:
{
    r3 = MemoryInline::FlatRead16((r29 + 300));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8057D674:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057D6E4;
    }
}

loc_8057D678:
{
    r3 = r29;
    // inline leaf 0x80590CE4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 228);
    // end of inlined leaf 0x80590CE4
    f3.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = std::fabs(f1.d);
    f1.d = std::fabs(f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    SetCRFloatResident(cr, 0, f4.d, f30.d);
}

loc_8057D6CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057D6D8;
    }
}

loc_8057D6D0:
{
    f30.d = f4.d;
    goto loc_8057D6E4;
}

loc_8057D6D8:
{
    SetCRFloatResident(cr, 0, f2.d, f30.d);
}

loc_8057D6DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057D6E4;
    }
}

loc_8057D6E0:
{
    f30.d = f2.d;
}

loc_8057D6E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r3 = (r29 + 56);
    f7.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    f6.d = MemoryInline::FlatReadFloat32((r29 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f5.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f0.d = PpcFmulsInline(f3.d, f30.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f4.d = PpcFmulsInline(f2.d, f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f3.d = PpcFmulsInline(f1.d, f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteFloat32((r29 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 64), f0.d);
    ctx->lr = 0x8057D740u;
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
    r3 = r29;
    r4 = (r1 + 32);
    // inline leaf 0x80590C94 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 196));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C94
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 60));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 172));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f5.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8057D784:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057D7BC;
    }
}

loc_8057D788:
{
    f3.d = std::fabs(f4.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f0.d = f5.d;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8057D7A0:
{
    f5.d = PpcFmulsInline(f1.d, f2.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057D7BC;
    }
}

loc_8057D7A8:
{
    f5.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 176));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_8057D7B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057D7BC;
    }
}

loc_8057D7B8:
{
    f5.d = f0.d;
}

loc_8057D7BC:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f5.d));
    r3 = r29;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r0 & 16);
}

loc_8057D7D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057D7F4;
    }
}

loc_8057D7D4:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 56));
    goto loc_8057D7F4;
}

loc_8057D7DC:
{
    r12 = MemoryInline::FlatRead32((r29 + 12));
    r3 = r29;
    r4 = (r1 + 44);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x8057D7F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8057D7F4:
{
    r3 = r29;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    MemoryInline::FlatWriteFloat32((r3 + 376), f31.d);
}

loc_8057D800:
{
    r4 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1024);
}

loc_8057D810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057D81C;
    }
}

loc_8057D814:
{
    r0 = 0;
    goto loc_8057D824;
}

loc_8057D81C:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_8057D824:
{
    MemoryInline::FlatWrite32((r29 + 536), r0);
    r3 = r29;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r0 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D838:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057D84C;
    }
}

loc_8057D83C:
{
    r0 = MemoryInline::FlatRead16((r29 + 596));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite16((r29 + 596), static_cast<uint16_t>(r0));
    goto loc_8057D858;
}

loc_8057D84C:
{
    r0 = MemoryInline::FlatRead16((r29 + 596));
    r0 = (r0 & -65);
    MemoryInline::FlatWrite16((r29 + 596), static_cast<uint16_t>(r0));
}

loc_8057D858:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8057D398 func_8057D398 preserves=false fpr_mask=0xC0000000
