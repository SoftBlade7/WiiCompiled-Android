#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80186844(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80186844;

loc_80186844:
{
    r4 = 1431633920;
    r6 = MemoryInline::FlatRead8((r3 + 204));
    r0 = (r4 + 21846);
    r5 = 0x80250000u;
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 11096));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r0 = (r4 + r0);
    r0 = (r0 * 3);
    r0 = (r6 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8018687C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801868A4;
    }
}

loc_80186880:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80186888;
    }
}

loc_80186884:
{
    goto loc_80186894;
}

loc_80186888:
{
}

loc_8018688C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80186894;
    }
}

loc_80186890:
{
    goto loc_801868C0;
}

loc_80186894:
{
    r4 = 0x80250000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11096));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_801868CC;
}

loc_801868A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    r4 = 0x80250000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11120));
    f1.d = (-(f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_801868CC;
}

loc_801868C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_801868CC:
{
    r4 = 1431633920;
    r0 = (r4 + 21846);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801868E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018690C;
    }
}

loc_801868E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801868F0;
    }
}

loc_801868EC:
{
    goto loc_801868FC;
}

loc_801868F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801868F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801868FC;
    }
}

loc_801868F8:
{
    goto loc_80186928;
}

loc_801868FC:
{
    r3 = 0x80250000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11096));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_80186934;
}

loc_8018690C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 80));
    r3 = 0x80250000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11120));
    f1.d = (-(f1.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_80186934;
}

loc_80186928:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_80186934:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000004B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80186844 func_80186844 preserves=true fpr_mask=0x00000000
