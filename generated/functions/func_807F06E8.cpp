#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F06E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807F06E8;

loc_807F06E8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r0 = 1127219200;
    r4 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r31 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    }
    r5 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r5 + 2928));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807F0728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0738;
    }
}

loc_807F072C:
{
    r0 = MemoryInline::FlatRead32((r5 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807F0734:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F0744;
    }
}

loc_807F0738:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r0));
    goto loc_807F0D0C;
}

loc_807F0744:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead8((r4 + 907));
}

loc_807F0758:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F078C;
    }
}

loc_807F075C:
{
    r4 = 0x809C0000u;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 18048));
    r4 = MemoryInline::FlatRead32((r4 + 124));
}

loc_807F0770:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807F0784;
    }
}

loc_807F0774:
{
    r4 = MemoryInline::FlatRead32((r4 + 8));
}

loc_807F077C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(2))) {
        goto loc_807F0784;
    }
}

loc_807F0780:
{
    r0 = 1;
}

loc_807F0784:
{
}

loc_807F0788:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807F08EC;
    }
}

loc_807F078C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r0));
    r4 = 0;
    r3 = (r3 + 152);
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807F07A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F07C0;
    }
}

loc_807F07AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807F07B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F07E0;
    }
}

loc_807F07B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F07B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F084C;
    }
}

loc_807F07BC:
{
    goto loc_807F0D0C;
}

loc_807F07C0:
{
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r5 = 0x808B0000u;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25288));
    ctx->lr = 0x807F07DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F0D0C;
}

loc_807F07E0:
{
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r30 = r3;
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & -16);
    r3_addr_11 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    // inline leaf 0x800829D0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800829D0
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f2.d = MemoryInline::FlatReadFloat64((r3 + -25048));
    r5 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r3 = (r31 + 152);
    r4 = 0;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -25284));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = f31.d;
    r4 = 3;
    ctx->lr = 0x807F0848u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063CA98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F0D0C;
}

loc_807F084C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 128), static_cast<uint8_t>(r0));
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r5 = 0x808B0000u;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25288));
    ctx->lr = 0x807F0870u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r31 + 380));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807F0878:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0D0C;
    }
}

loc_807F087C:
{
    r3 = MemoryInline::FlatRead32((r31 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F0884:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F0D0C;
    }
}

loc_807F0888:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 0;
    ctr = r0;
}

loc_807F0898:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807F08C0;
    }
}

loc_807F089C:
{
    r0 = MemoryInline::FlatRead32((r5 + 20));
}

loc_807F08A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_807F08B4;
    }
}

loc_807F08A8:
{
}

loc_807F08AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_807F08B4;
    }
}

loc_807F08B0:
{
    goto loc_807F08C4;
}

loc_807F08B4:
{
    r5 = (r5 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807F089C;
    }
}

loc_807F08C0:
{
    r4 = -1;
}

loc_807F08C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807F08C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F0D0C;
    }
}

loc_807F08CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_807F08D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F0D0C;
    }
}

loc_807F08D4:
{
    r3 = MemoryInline::FlatRead32((r31 + 380));
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 376), r0);
    r0 = 0;
    r3_addr_10 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_10, static_cast<uint8_t>(r0));
    goto loc_807F0D0C;
}

loc_807F08EC:
{
    r4 = 0;
    r3 = (r3 + 152);
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r6 = MemoryInline::FlatRead32((r31 + 380));
    r3 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_807F0904:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0D0C;
    }
}

loc_807F0908:
{
    r0 = (r3 + -1);
}

loc_807F0910:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_807F0920;
    }
}

loc_807F0914:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F0918:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0BD8;
    }
}

loc_807F091C:
{
    goto loc_807F0D0C;
}

loc_807F0920:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r31 + 376));
    ctr = r0;
}

loc_807F0934:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807F095C;
    }
}

loc_807F0938:
{
    r0 = MemoryInline::FlatRead32((r6 + 20));
}

loc_807F0940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_807F0950;
    }
}

loc_807F0944:
{
}

loc_807F0948:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_807F0950;
    }
}

loc_807F094C:
{
    goto loc_807F0960;
}

loc_807F0950:
{
    r6 = (r6 + 4);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807F0938;
    }
}

loc_807F095C:
{
    r3 = -1;
}

loc_807F0960:
{
}

loc_807F0964:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_807F09B0;
    }
}

loc_807F0968:
{
    r3 = 0x809C0000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r3 & 2);
}

loc_807F0984:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F09B0;
    }
}

loc_807F0988:
{
    r0 = (r3 & 16);
}

loc_807F098C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F09B0;
    }
}

loc_807F0990:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16);
}

loc_807F09AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807F0B10;
    }
}

loc_807F09B0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 128), static_cast<uint8_t>(r0));
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807F09CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F09E4;
    }
}

loc_807F09D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807F09D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0A04;
    }
}

loc_807F09D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F09DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0A70;
    }
}

loc_807F09E0:
{
    goto loc_807F0BC4;
}

loc_807F09E4:
{
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r5 = 0x808B0000u;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25288));
    ctx->lr = 0x807F0A00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F0BC4;
}

loc_807F0A04:
{
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r30 = r3;
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & -16);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    // inline leaf 0x800829D0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800829D0
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f2.d = MemoryInline::FlatReadFloat64((r3 + -25048));
    r5 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r3 = (r31 + 152);
    r4 = 0;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -25284));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = f31.d;
    r4 = 3;
    ctx->lr = 0x807F0A6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063CA98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F0BC4;
}

loc_807F0A70:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 128), static_cast<uint8_t>(r0));
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r5 = 0x808B0000u;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25288));
    ctx->lr = 0x807F0A94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r31 + 380));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807F0A9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0BC4;
    }
}

loc_807F0AA0:
{
    r3 = MemoryInline::FlatRead32((r31 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F0AA8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F0BC4;
    }
}

loc_807F0AAC:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 0;
    ctr = r0;
}

loc_807F0ABC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807F0AE4;
    }
}

loc_807F0AC0:
{
    r0 = MemoryInline::FlatRead32((r5 + 20));
}

loc_807F0AC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_807F0AD8;
    }
}

loc_807F0ACC:
{
}

loc_807F0AD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_807F0AD8;
    }
}

loc_807F0AD4:
{
    goto loc_807F0AE8;
}

loc_807F0AD8:
{
    r5 = (r5 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807F0AC0;
    }
}

loc_807F0AE4:
{
    r4 = -1;
}

loc_807F0AE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807F0AEC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F0BC4;
    }
}

loc_807F0AF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_807F0AF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F0BC4;
    }
}

loc_807F0AF8:
{
    r3 = MemoryInline::FlatRead32((r31 + 380));
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 376), r0);
    r0 = 0;
    r3_addr_7 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r0));
    goto loc_807F0BC4;
}

loc_807F0B10:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 128), static_cast<uint8_t>(r0));
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F0B2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0B3C;
    }
}

loc_807F0B30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_807F0B34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0B5C;
    }
}

loc_807F0B38:
{
    goto loc_807F0BC4;
}

loc_807F0B3C:
{
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r5 = 0x808B0000u;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25288));
    ctx->lr = 0x807F0B58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F0BC4;
}

loc_807F0B5C:
{
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r30 = r3;
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_7 & -16);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // inline leaf 0x800829D0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800829D0
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f2.d = MemoryInline::FlatReadFloat64((r3 + -25048));
    r5 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r3 = (r31 + 152);
    r4 = 0;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -25284));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = f31.d;
    r4 = 1;
    ctx->lr = 0x807F0BC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063CA98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F0BC4:
{
    r0 = MemoryInline::FlatRead32((r31 + 376));
    r3 = r31;
    r4 = (r0 & 255);
    ctx->lr = 0x807F0BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F1094u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F0D0C;
}

loc_807F0BD8:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r5 = r6;
    r3 = r6;
    r4 = 0;
    ctr = r0;
}

loc_807F0BF0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807F0C34;
    }
}

loc_807F0BF4:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_807F0BFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F0C24;
    }
}

loc_807F0C00:
{
    r0 = MemoryInline::FlatRead32((r5 + 20));
}

loc_807F0C08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_807F0C24;
    }
}

loc_807F0C0C:
{
    r3 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6_addr_1 = (r6 + r4);
    MemoryInline::FlatWrite8(r6_addr_1, static_cast<uint8_t>(r3));
    r3 = (r6 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 20));
    goto loc_807F0C38;
}

loc_807F0C24:
{
    r5 = (r5 + 4);
    r4 = (r4 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807F0BF4;
    }
}

loc_807F0C34:
{
    r29 = -1;
}

loc_807F0C38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(-1));
}

loc_807F0C3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0D0C;
    }
}

loc_807F0C40:
{
    r3 = r31;
    r4 = (r29 & 255);
    ctx->lr = 0x807F0C4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F0044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 128), static_cast<uint8_t>(r0));
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F0C68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0C78;
    }
}

loc_807F0C6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_807F0C70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0C98;
    }
}

loc_807F0C74:
{
    goto loc_807F0D00;
}

loc_807F0C78:
{
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r5 = 0x808B0000u;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25288));
    ctx->lr = 0x807F0C94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F0D00;
}

loc_807F0C98:
{
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r30 = r3;
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // inline leaf 0x800829D0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800829D0
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f2.d = MemoryInline::FlatReadFloat64((r3 + -25048));
    r5 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r3 = (r31 + 152);
    r4 = 0;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -25284));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = f31.d;
    r4 = 1;
    ctx->lr = 0x807F0D00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063CA98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F0D00:
{
    r3 = r31;
    r4 = (r29 & 255);
    ctx->lr = 0x807F0D0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F1094u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F0D0C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807F06E8 func_807F06E8 preserves=false fpr_mask=0x80000000
