#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80191FCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80191FCC;

loc_80191FCC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80191E54u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2.d = MemoryInline::FlatReadFloat32((r31 + 36));
    r3 = 0x80250000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11336));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r6 = 1;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r4 = (r4_rot_0 & 65535);
    r0 = 0;
    MemoryInline::FlatWrite16((r5 + 48), static_cast<uint16_t>(r6));
    r5 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite16((r5 + 206), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 208), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r5 + 210), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 212), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 214), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 216), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 218), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 & -131073);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 | 65536);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x800007FB gpr_return=0x00000018 fpr_read=0x0000001A fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC0 cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80191FCC func_80191FCC preserves=true fpr_mask=0x00000000
