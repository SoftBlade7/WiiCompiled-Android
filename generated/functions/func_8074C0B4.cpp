#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074C0B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8074C0E4_loc_0 = 0;
    uint32_t addr_stfsx_8074C0CC_loc_0 = 0;
    uint32_t addr_stfsx_8074C0F0_loc_0 = 0;
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
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

    goto loc_8074C0B4;

loc_8074C0B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 0x808D0000u;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8074C0C4:
{
    r0 = (r0 * 20);
    r5 = (r5 + -17336);
    addr_stfsx_8074C0CC_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8074C0CC_loc_0, f1.d);
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r7 + -1);
    r0 = (r0 * 20);
    r6 = (r6 + 4);
    addr_lfsx_8074C0E4_loc_0 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8074C0E4_loc_0);
    r0 = (r7 * 20);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    addr_stfsx_8074C0F0_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8074C0F0_loc_0, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074C114;
    }
}

loc_8074C0F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8074C0FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074C144;
    }
}

loc_8074C100:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8074C104:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074C174;
    }
}

loc_8074C108:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_8074C10C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074C1A4;
    }
}

loc_8074C110:
{
    goto loc_8074C1D0;
}

loc_8074C114:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r5 + 0);
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32(r5);
    r6 = (r7 + r6);
    MemoryInline::FlatWrite32((r6 + 8), r5);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r6 + 16), r0);
    goto loc_8074C1D0;
}

loc_8074C144:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r5 + 12);
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r6 = (r7 + r6);
    MemoryInline::FlatWrite32((r6 + 8), r5);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r6 + 16), r0);
    goto loc_8074C1D0;
}

loc_8074C174:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r5 + 24);
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 24));
    r6 = (r7 + r6);
    MemoryInline::FlatWrite32((r6 + 8), r5);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r6 + 16), r0);
    goto loc_8074C1D0;
}

loc_8074C1A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r5 + 36);
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 36));
    r6 = (r7 + r6);
    MemoryInline::FlatWrite32((r6 + 8), r5);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r6 + 16), r0);
}

loc_8074C1D0:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000006 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8074C0B4 func_8074C0B4 preserves=true fpr_mask=0x00000000
