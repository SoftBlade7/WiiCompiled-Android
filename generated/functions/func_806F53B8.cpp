#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F53B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F53B8;

loc_806F53B8:
{
    r7 = 1;
    r6 = 4;
    r4 = 0x808C0000u;
    goto loc_806F5430;
}

loc_806F53C8:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r7 = (r7 + 1);
    r5_addr_2 = (r5 + r6);
    r5 = MemoryInline::FlatRead32(r5_addr_2);
    r6 = (r6 + 4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 16), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 20), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 30652));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 60));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 60), f0.d);
}

loc_806F5430:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_806F5438:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806F53C8;
    }
}

loc_806F543C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F53B8 func_806F53B8 preserves=true fpr_mask=0x00000000
