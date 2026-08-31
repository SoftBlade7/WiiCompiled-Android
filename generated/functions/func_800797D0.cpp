#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800797D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800797D0;

loc_800797D0:
{
    r4 = 1431633920;
    r5 = MemoryInline::FlatRead8((r3 + 186));
    r0 = (r4 + 21846);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29192));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 3);
    r0 = (r5 - r0);
}

loc_80079804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80079818;
    }
}

loc_80079808:
{
}

loc_8007980C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80079830;
    }
}

loc_80079810:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_8007983C;
}

loc_80079818:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29168));
    f1.d = (-(f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_8007983C;
}

loc_80079830:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_8007983C:
{
    r4 = 1431633920;
    r0 = (r4 + 21846);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80079854:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007986C;
    }
}

loc_80079858:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8007985C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80079880;
    }
}

loc_80079860:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29192));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_80079888;
}

loc_8007986C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29168));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_80079888;
}

loc_80079880:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_80079888:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
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

// RECOMP_GUEST_ABI gpr_read=0x0000002F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800797D0 func_800797D0 preserves=true fpr_mask=0x00000000
