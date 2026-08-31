#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C619C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806C619C;

loc_806C619C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r7 = 0;
    r5 = 0;
    goto loc_806C6200;
}

loc_806C61AC:
{
    r4 = MemoryInline::FlatRead32((r3 + 188));
    r7 = (r7 + 1);
    r4_addr_2 = (r4 + r5);
    r6 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = MemoryInline::FlatRead32((r6 + 32));
    r0 = MemoryInline::FlatRead16((r6 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28));
    r0 = (r0 | 1);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWrite16((r6 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r6 + 48), f2.d);
    r4 = MemoryInline::FlatRead32((r3 + 188));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    r4_addr_3 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_3);
    r5 = (r5 + 4);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r4 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r4 + 56), f0.d);
}

loc_806C6200:
{
    r0 = MemoryInline::FlatRead8((r3 + 196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_806C6208:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806C61AC;
    }
}

loc_806C620C:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806C619C func_806C619C preserves=true fpr_mask=0x00000000
