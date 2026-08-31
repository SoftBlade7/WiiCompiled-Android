#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017F2D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8017F2D0;

loc_8017F2D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead8((r3 + 150));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017F2F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F4AC;
    }
}

loc_8017F2F8:
{
    r0 = 1;
    r30 = r31;
    MemoryInline::FlatWrite8((r3 + 150), static_cast<uint8_t>(r0));
    r29 = 0;
}

loc_8017F308:
{
    r3 = MemoryInline::FlatRead32((r30 + 608));
    ctx->lr = 0x8017F310u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80175F3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_8017F31C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8017F308;
    }
}

loc_8017F320:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 145), static_cast<uint8_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_8017F330:
{
    MemoryInline::FlatWrite8((r31 + 146), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 148), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 149), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017F384;
    }
}

loc_8017F340:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8017F35C;
    }
}

loc_8017F344:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8017F348:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017F378;
    }
}

loc_8017F34C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8017F444;
    }
}

loc_8017F350:
{
}

loc_8017F354:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8017F370;
    }
}

loc_8017F358:
{
    goto loc_8017F444;
}

loc_8017F35C:
{
}

loc_8017F360:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(8))) {
        goto loc_8017F444;
    }
}

loc_8017F364:
{
}

loc_8017F368:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(5))) {
        goto loc_8017F384;
    }
}

loc_8017F36C:
{
    goto loc_8017F444;
}

loc_8017F370:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 145), static_cast<uint8_t>(r0));
}

loc_8017F378:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 146), static_cast<uint8_t>(r0));
    goto loc_8017F444;
}

loc_8017F384:
{
}

loc_8017F388:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017F398;
    }
}

loc_8017F38C:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8017F394:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017F3AC;
    }
}

loc_8017F398:
{
}

loc_8017F39C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017F3C0;
    }
}

loc_8017F3A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 141));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017F3A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F3C0;
    }
}

loc_8017F3AC:
{
    r3 = (r31 + 1432);
    ctx->lr = 0x8017F3B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 448));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801BF640u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8017F43C;
}

loc_8017F3C0:
{
    r0 = MemoryInline::FlatRead8((r31 + 142));
}

loc_8017F3C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8017F434;
    }
}

loc_8017F3CC:
{
}

loc_8017F3D0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(3))) {
        goto loc_8017F434;
    }
}

loc_8017F3D4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 148), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801BF63Cu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017F3E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F43C;
    }
}

loc_8017F3E8:
{
    r3 = (r31 + 1432);
    ctx->lr = 0x8017F3F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 1432);
    r4 = 1;
    // inline leaf 0x801A0D8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x801A0D8C
    r4 = 0x80000000u;
    r7 = 0x80180000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + -21148);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r3 = (r31 + 1432);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 67108863);
    r6 = (r0 * 100);
    ctx->lr = 0x8017F430u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A0870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8017F43C;
}

loc_8017F434:
{
    r3 = MemoryInline::FlatRead32((r31 + 448));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801BF640u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8017F43C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 149), static_cast<uint8_t>(r0));
}

loc_8017F444:
{
    r3 = MemoryInline::FlatRead32((r31 + 1036));
    r0 = 1127219200;
    r4 = 0x80250000u;
    r7 = 19;
    r3 = (r3 ^ -2147483648);
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r5 = 2;
    f1.d = MemoryInline::FlatReadFloat64((r4 + 10904));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWrite32((r31 + 16), r7);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWrite32((r31 + 1040), r6);
    MemoryInline::FlatWrite32((r31 + 180), r5);
    MemoryInline::FlatWriteFloat32((r31 + 1868), f0.d);
    r12 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017F490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017F4AC;
    }
}

loc_8017F494:
{
    f0.d = PPC_Fctiwz(f0.d);
    r3 = 3;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r4 = fctiwzword0;
    ctr = r12;
    ctx->lr = 0x8017F4ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017F4AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8017F2D0 func_8017F2D0 preserves=true fpr_mask=0x00000000
