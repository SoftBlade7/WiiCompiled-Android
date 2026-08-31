#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80138354(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80138354;

loc_80138354:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80330000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + 25208);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 52), 0, 1134u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 281u, (r4 + 333));
}

loc_80138380:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138390;
    }
}

loc_80138384:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 52));
}

loc_8013838C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_801383E8;
    }
}

loc_80138390:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 565u, (r4 + 617));
    r6 = 1;
}

loc_8013839C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801383AC;
    }
}

loc_801383A0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 284u, (r4 + 336));
}

loc_801383A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_801383E8;
    }
}

loc_801383AC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 849u, (r4 + 901));
    r6 = 2;
}

loc_801383B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801383C8;
    }
}

loc_801383BC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 568u, (r4 + 620));
}

loc_801383C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_801383E8;
    }
}

loc_801383C8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1133u, (r4 + 1185));
    r6 = 3;
}

loc_801383D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801383E4;
    }
}

loc_801383D8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 852u, (r4 + 904));
}

loc_801383E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_801383E8;
    }
}

loc_801383E4:
{
    r6 = 4;
}

loc_801383E8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
}

loc_801383EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801384A8;
    }
}

loc_801383F0:
{
    r0 = (r6 * 284);
    r30 = 0x80330000u;
    r30 = (r30 + 25208);
    r29 = (r30 + r0);
}

loc_80138408:
{
    r0 = MemoryInline::FlatRead8((r29 + 335));
}

loc_80138410:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8013847C;
    }
}

loc_80138414:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80138418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80138428;
    }
}

loc_8013841C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 335), static_cast<uint8_t>(r0));
    goto loc_80138430;
}

loc_80138428:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 335), static_cast<uint8_t>(r0));
}

loc_80138430:
{
    r0 = MemoryInline::FlatRead8((r29 + 334));
    r3 = (r29 + 60);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 255);
    ctx->lr = 0x80138444u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80145958u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80138448:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801384A8;
    }
}

loc_8013844C:
{
    r30 = 0;
    r31 = 0x80330000u;
    MemoryInline::FlatWrite8((r29 + 335), static_cast<uint8_t>(r30));
    r31 = (r31 + 25208);
    r12 = MemoryInline::FlatRead32((r31 + 1580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80138464:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801384A8;
    }
}

loc_80138468:
{
    r3 = (r31 + 1572);
    ctr = r12;
    ctx->lr = 0x80138474u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r31 + 1580), r30);
    goto loc_801384A8;
}

loc_8013847C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80138480:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801384A8;
    }
}

loc_80138484:
{
    r31 = 0;
    MemoryInline::FlatWrite8((r29 + 335), static_cast<uint8_t>(r31));
    r12 = MemoryInline::FlatRead32((r30 + 1580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80138494:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801384A8;
    }
}

loc_80138498:
{
    r3 = (r30 + 1572);
    ctr = r12;
    ctx->lr = 0x801384A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r30 + 1580), r31);
}

loc_801384A8:
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
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80138354 func_80138354 preserves=true fpr_mask=0x00000000
