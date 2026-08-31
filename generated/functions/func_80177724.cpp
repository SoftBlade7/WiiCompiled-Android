#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80177724(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80177724;

loc_80177724:
{
    r5 = 0x80340000u;
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r5 + 18768));
}

loc_8017F0EC:
{
    r5 = (0 - r4);
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r5 = (r5 | r4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
}

loc_8017F0FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 604));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
    r0_mrot_0 = (r0_rot_0 & 32);
    r0_mdest_0 = (r0 & -33);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite8((r3 + 604), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 139), static_cast<uint8_t>(r4));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8017F190;
    }
}

loc_8017F110:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 492));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 52));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f1.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017F144:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F208;
    }
}

loc_8017F14C:
{
    r4 = MemoryInline::FlatRead32((r3 + 496));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f1.d);
    r4 = MemoryInline::FlatRead32((r3 + 500));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f1.d);
    r4 = MemoryInline::FlatRead32((r3 + 504));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f1.d);
    r3 = MemoryInline::FlatRead32((r3 + 508));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    goto loc_8017F208;
}

loc_8017F190:
{
    r4 = MemoryInline::FlatRead32((r3 + 492));
    r5 = 0x80250000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10860));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017F1C0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F208;
    }
}

loc_8017F1C8:
{
    r4 = MemoryInline::FlatRead32((r3 + 496));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 500));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 504));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 508));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
}

loc_8017F208:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80177724 func_80177724 preserves=true fpr_mask=0x00000000
