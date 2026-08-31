#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EF664(CpuContext* MKW_RESTRICT ctx)
{
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

    goto loc_806EF664;

loc_806EF664:
{
    r6 = 0x808A0000u;
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r6 = (r6 + 2832);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::FlatReadFloat32(r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806EF67C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EF720;
    }
}

loc_806EF684:
{
    r5 = MemoryInline::FlatRead16((r3 + 72));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_806EF68C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806EF714;
    }
}

loc_806EF690:
{
    r4 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (r4 + -1);
}

loc_806EF69C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_806EF714;
    }
}

loc_806EF6A0:
{
    r0 = MemoryInline::FlatRead8((r3 + 68));
}

loc_806EF6A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806EF6DC;
    }
}

loc_806EF6AC:
{
    r4 = MemoryInline::FlatRead16((r3 + 70));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r5 * 56);
    r7 = MemoryInline::FlatRead32((r3 + 76));
    r5 = (r4 * 56);
    r4 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    r4 = (r7 + r5);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 48));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    goto loc_806EF750;
}

loc_806EF6DC:
{
    r4 = MemoryInline::FlatRead16((r3 + 70));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r5 + -1);
    r0 = (r0 * 56);
    r7 = MemoryInline::FlatRead32((r3 + 76));
    r4 = (r4 + -1);
    r5 = (r4 * 56);
    r4 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    r4 = (r7 + r5);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 48));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    goto loc_806EF750;
}

loc_806EF714:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    goto loc_806EF750;
}

loc_806EF720:
{
    r4 = MemoryInline::FlatRead16((r3 + 70));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r4 * 56);
    r5 = MemoryInline::FlatRead32((r3 + 76));
    r4 = (r5 + r4);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    r0 = (r0 * 56);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    r4 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
}

loc_806EF750:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::FlatReadFloat32(r6);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806EF75C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806EF768;
    }
}

loc_806EF760:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 48));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
}

loc_806EF768:
{
    r0 = MemoryInline::FlatRead8((r3 + 68));
}

loc_806EF770:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806EF790;
    }
}

loc_806EF774:
{
    r5 = MemoryInline::FlatRead16((r3 + 70));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 70), static_cast<uint16_t>(r0));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    goto loc_806EF7A8;
}

loc_806EF790:
{
    r5 = MemoryInline::FlatRead16((r3 + 70));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r3 + 70), static_cast<uint16_t>(r0));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
}

loc_806EF7A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_806EF7B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806EF7F0;
    }
}

loc_806EF7B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_806EF7BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806EF7F0;
    }
}

loc_806EF7C0:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_806EF7CC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_806EF7D8;
    }
}

loc_806EF7D0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
}

loc_806EF7D8:
{
    r4 = MemoryInline::FlatRead16((r3 + 70));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_806EF7E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_806EF7F0;
    }
}

loc_806EF7E8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 70), static_cast<uint16_t>(r0));
}

loc_806EF7F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 23));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EF7F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_806EF7FC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806ED34Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
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

loc_return:
{
    ctx->gpr[0] = r0;
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

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806EF664 func_806EF664 preserves=true fpr_mask=0x00000000
