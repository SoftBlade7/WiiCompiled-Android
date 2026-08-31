#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80859FA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80859FA4;

loc_80859FA4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r4 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80859FCC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80859FD4;
    }
}

loc_80859FD0:
{
    r4 = 1;
}

loc_80859FD4:
{
    r0 = MemoryInline::FlatRead32((r3 + 5988));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80859FDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085A020;
    }
}

loc_80859FE0:
{
    r31 = (r4 & 255);
    r29 = 0;
    r30 = 0x809C0000u;
    goto loc_8085A004;
}

loc_80859FF0:
{
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = r29;
    r3 = (r3 + 52);
    // inline leaf 0x8061B470 (8 guest instruction(s))
    r0 = (r4 & 255);
    r3 = 0x809C0000u;
    r0 = (r0 * 236);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x8061B470
    r29 = (r29 + 1);
}

loc_8085A004:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r31));
}

loc_8085A008:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80859FF0;
    }
}

loc_8085A00C:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 976), static_cast<uint8_t>(r0));
}

loc_8085A020:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001B gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80859FA4 func_80859FA4 preserves=true fpr_mask=0x00000000
