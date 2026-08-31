#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805980D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805980D8;

loc_805980D8:
{
    r6 = MemoryInline::FlatRead16((r3 + 64));
}

loc_805980E0:
{
    r0 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 64), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805980F8;
    }
}

loc_805980EC:
{
    r5 = MemoryInline::FlatRead16((r3 + 66));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 66), static_cast<uint16_t>(r0));
}

loc_805980F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = (r0 & 16);
}

loc_80598100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80598140;
    }
}

loc_80598104:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r4 + 88));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r4 + 92));
    r5 = MemoryInline::FlatRead16((r3 + 68));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r4 + 96));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 68), static_cast<uint16_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 72), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 76), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 80), f0.d);
}

loc_80598140:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = (r5 & 288);
}

loc_80598148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80598214;
    }
}

loc_8059814C:
{
    r0 = (r5 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80598150:
{
    r5 = MemoryInline::FlatRead16((r3 + 70));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 70), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80598178;
    }
}

loc_80598160:
{
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 | 2097152);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    goto loc_805981A0;
}

loc_80598178:
{
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -2097153);
    MemoryInline::FlatWrite32((r5 + 12), r0);
}

loc_805981A0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = (r0 & 2048);
}

loc_805981A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805981C4;
    }
}

loc_805981AC:
{
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 | 4194304);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    goto loc_805981D8;
}

loc_805981C4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & -4194305);
    MemoryInline::FlatWrite32((r5 + 4), r0);
}

loc_805981D8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = (r0 & 32768);
}

loc_805981E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805981FC;
    }
}

loc_805981E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_80598250;
}

loc_805981FC:
{
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r0 & -513);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_80598250;
}

loc_80598214:
{
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -2097153);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 & -4194305);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r0 & -513);
    MemoryInline::FlatWrite32((r5 + 16), r0);
}

loc_80598250:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80598258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80598274;
    }
}

loc_8059825C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

loc_80598274:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -513);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805980D8 func_805980D8 preserves=true fpr_mask=0x00000000
