#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079EC98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079EC98;

loc_8079EC98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079EC9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079ECBC;
    }
}

loc_8079ECA0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0x809C0000u;
    r4 = (r4 + 12104);
    r6 = (r0 * 116);
    r4 = (r4 + r6);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 60));
    goto loc_8079ECD4;
}

loc_8079ECBC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0x809C0000u;
    r4 = (r4 + 12104);
    r6 = (r0 * 116);
    r4 = (r4 + r6);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 64));
}

loc_8079ECD4:
{
    r5 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    r5 = (r5 + 12104);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r5 + r6);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    r0 = (r0 * 116);
    r4 = MemoryInline::FlatRead32((r3 + 164));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f1.d);
    r3 = (r5 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079EC98 func_8079EC98 preserves=true fpr_mask=0x00000000
