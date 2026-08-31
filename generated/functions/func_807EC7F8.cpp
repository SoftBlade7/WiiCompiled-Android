#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807EC7F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807EC7F8;

loc_807EC7F8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_807EC820:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(106))) {
        goto loc_807EC82C;
    }
}

loc_807EC824:
{
}

loc_807EC828:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(107))) {
        goto loc_807EC83C;
    }
}

loc_807EC82C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(110));
}

loc_807EC830:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807EC8B8;
    }
}

loc_807EC834:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(111));
}

loc_807EC838:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807EC8B8;
    }
}

loc_807EC83C:
{
    r3 = MemoryInline::FlatRead32((r3 + 100));
    r30 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807EC848:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807EC854;
    }
}

loc_807EC84C:
{
    r30 = 0;
    goto loc_807EC8A8;
}

loc_807EC854:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 17984);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EC8A4;
    }
}

loc_807EC860:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x807EC874u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807EC88C;
}

loc_807EC878:
{
}

loc_807EC87C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_807EC888;
    }
}

loc_807EC880:
{
    r0 = 1;
    goto loc_807EC898;
}

loc_807EC888:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_807EC88C:
{
}

loc_807EC890:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807EC878;
    }
}

loc_807EC894:
{
    r0 = 0;
}

loc_807EC898:
{
}

loc_807EC89C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807EC8A4;
    }
}

loc_807EC8A0:
{
    goto loc_807EC8A8;
}

loc_807EC8A4:
{
    r30 = 0;
}

loc_807EC8A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807EC8AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EC8D0;
    }
}

loc_807EC8B0:
{
    r3 = MemoryInline::FlatRead32((r30 + 100));
    goto loc_807EC8D4;
}

loc_807EC8B8:
{
    r5 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r3 + 400));
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r3 = (r3 & 255);
    goto loc_807EC8D4;
}

loc_807EC8D0:
{
    r3 = -1;
}

loc_807EC8D4:
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
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807EC7F8 func_807EC7F8 preserves=true fpr_mask=0x00000000
