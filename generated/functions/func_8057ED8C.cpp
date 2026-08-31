#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057ED8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057ED8C;

loc_8057ED8C:
{
    r0 = MemoryInline::FlatRead16((r3 + 252));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r10 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8057ED98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057EE48;
    }
}

loc_8057ED9C:
{
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = 0x808B0000u;
    r8 = 0x809C0000u;
    r9 = 0x808B0000u;
    r0 = (r0 + r6);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r4 = MemoryInline::FlatRead16((r4 + 23752));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8057EDC0:
{
    r8 = MemoryInline::FlatRead16((r8 + 6368));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r9 + 23756));
    r6 = r4;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_8057EDD8;
    }
}

loc_8057EDD0:
{
    r6 = r8;
    r8 = r4;
}

loc_8057EDD8:
{
    r4 = MemoryInline::FlatRead32(r3);
    f0.d = (-(f1.d));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 136));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8057EDEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057EE00;
    }
}

loc_8057EDF0:
{
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    goto loc_8057EE14;
}

loc_8057EE00:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8057EE04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057EE14;
    }
}

loc_8057EE08:
{
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r8);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
}

loc_8057EE14:
{
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8057EE1C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_8057EE2C;
    }
}

loc_8057EE20:
{
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r7));
    r0 = 1;
    goto loc_8057EE30;
}

loc_8057EE2C:
{
    r0 = 0;
}

loc_8057EE30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057EE34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057EE48;
    }
}

loc_8057EE38:
{
    r4 = MemoryInline::FlatRead16((r3 + 252));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r10 = 1;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 252), static_cast<uint16_t>(r0));
}

loc_8057EE48:
{
    r3 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x00000759 gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057ED8C func_8057ED8C preserves=true fpr_mask=0x00000000
