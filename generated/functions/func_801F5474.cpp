#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F5474(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F5474;

loc_801F5474:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r7 = MemoryInline::FlatRead32(r4);
}

loc_801F5498:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r7))) {
        goto loc_801F54EC;
    }
}

loc_801F549C:
{
    r0 = MemoryInline::FlatRead32((r7 + 36));
}

loc_801F54A4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_801F54B0;
    }
}

loc_801F54A8:
{
    MemoryInline::FlatWrite32(r4, r5);
    goto loc_801F54EC;
}

loc_801F54B0:
{
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r7 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r7 + 32), r0);
    r0 = MemoryInline::FlatRead32((r5 + 36));
    r7 = MemoryInline::FlatRead32((r5 + 32));
    MemoryInline::FlatWrite32((r7 + 36), r0);
    r8 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 32), r8);
    r7 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r7 + 36));
    MemoryInline::FlatWrite32((r5 + 36), r0);
    MemoryInline::FlatWrite32((r8 + 36), r5);
    r7 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r7 + 32), r5);
    MemoryInline::FlatWrite32(r4, r5);
}

loc_801F54EC:
{
}

loc_801F54F0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801F5500;
    }
}

loc_801F54F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 5616));
    MemoryInline::FlatWrite32((r5 + 28), r0);
    goto loc_801F5508;
}

loc_801F5500:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 28), r0);
}

loc_801F5508:
{
    r3 = MemoryInline::FlatRead32((r3 + 5584));
    r0 = (r3 & 1);
}

loc_801F5510:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F5528;
    }
}

loc_801F5514:
{
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F5518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F558C;
    }
}

loc_801F551C:
{
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F5524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F558C;
    }
}

loc_801F5528:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801F552C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5550;
    }
}

loc_801F5530:
{
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F5538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5550;
    }
}

loc_801F553C:
{
    r3 = MemoryInline::FlatRead32((r5 + 24));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801F5548:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5550;
    }
}

loc_801F554C:
{
    r31 = 1;
}

loc_801F5550:
{
    r3 = r30;
    r4 = r5;
    ctx->lr = 0x801F555Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F4940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F5560:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5568;
    }
}

loc_801F5564:
{
    goto loc_801F5590;
}

loc_801F5568:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801F556C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F558C;
    }
}

loc_801F5570:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x801F557Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C5B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F5580:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F558C;
    }
}

loc_801F5584:
{
    r3 = 17;
    goto loc_801F5590;
}

loc_801F558C:
{
    r3 = 0;
}

loc_801F5590:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F5474 func_801F5474 preserves=true fpr_mask=0x00000000
