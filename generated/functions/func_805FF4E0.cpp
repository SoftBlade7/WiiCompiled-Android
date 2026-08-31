#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FF4E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805FF4E0;

loc_805FF4E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 108));
}

loc_805FF500:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_805FF510;
    }
}

loc_805FF504:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_805FF508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF5E0;
    }
}

loc_805FF50C:
{
    goto loc_805FF6AC;
}

loc_805FF510:
{
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805FF520:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF6AC;
    }
}

loc_805FF524:
{
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_805FF530:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_805FF540;
    }
}

loc_805FF534:
{
}

loc_805FF538:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(6))) {
        goto loc_805FF54C;
    }
}

loc_805FF53C:
{
    goto loc_805FF558;
}

loc_805FF540:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 108), r0);
    goto loc_805FF560;
}

loc_805FF54C:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 108), r0);
    goto loc_805FF560;
}

loc_805FF558:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 108), r0);
}

loc_805FF560:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 804));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805FF574:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FF580;
    }
}

loc_805FF578:
{
    r30 = 0;
    goto loc_805FF5D4;
}

loc_805FF580:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF5D0;
    }
}

loc_805FF58C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805FF5A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FF5B8;
}

loc_805FF5A4:
{
}

loc_805FF5A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_805FF5B4;
    }
}

loc_805FF5AC:
{
    r0 = 1;
    goto loc_805FF5C4;
}

loc_805FF5B4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805FF5B8:
{
}

loc_805FF5BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FF5A4;
    }
}

loc_805FF5C0:
{
    r0 = 0;
}

loc_805FF5C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FF5C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF5D0;
    }
}

loc_805FF5CC:
{
    goto loc_805FF5D4;
}

loc_805FF5D0:
{
    r30 = 0;
}

loc_805FF5D4:
{
    r3 = r30;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    goto loc_805FF6AC;
}

loc_805FF5E0:
{
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805FF5F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF6AC;
    }
}

loc_805FF5F4:
{
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_805FF600:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_805FF610;
    }
}

loc_805FF604:
{
}

loc_805FF608:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(6))) {
        goto loc_805FF61C;
    }
}

loc_805FF60C:
{
    goto loc_805FF628;
}

loc_805FF610:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r30 + 108), r0);
    goto loc_805FF630;
}

loc_805FF61C:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r30 + 108), r0);
    goto loc_805FF630;
}

loc_805FF628:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r30 + 108), r0);
}

loc_805FF630:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 804));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805FF644:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FF650;
    }
}

loc_805FF648:
{
    r30 = 0;
    goto loc_805FF6A4;
}

loc_805FF650:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF6A0;
    }
}

loc_805FF65C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805FF670u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FF688;
}

loc_805FF674:
{
}

loc_805FF678:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_805FF684;
    }
}

loc_805FF67C:
{
    r0 = 1;
    goto loc_805FF694;
}

loc_805FF684:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805FF688:
{
}

loc_805FF68C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805FF674;
    }
}

loc_805FF690:
{
    r0 = 0;
}

loc_805FF694:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FF698:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FF6A0;
    }
}

loc_805FF69C:
{
    goto loc_805FF6A4;
}

loc_805FF6A0:
{
    r30 = 0;
}

loc_805FF6A4:
{
    r3 = r30;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
}

loc_805FF6AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805FF4E0 func_805FF4E0 preserves=true fpr_mask=0x00000000
