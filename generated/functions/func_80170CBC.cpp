#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80170CBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_80170CBC;

loc_80170CBC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 1127219200;
    r11 = (r0 & 255);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -26720));
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26688));
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = (r13 + -29304);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -26680));
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = MemoryInline::FlatRead32(r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r11);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(23));
    r0 = (r0_rot_0 & 255);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(27));
    r11 = (r11_rot_0 & 7);
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r29_addr_0 = (r29 + r11);
    r29 = MemoryInline::FlatRead8(r29_addr_0);
    r12 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 1);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(28));
    r30 = (r30_rot_0 & 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 255);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(11));
    r11 = (r11_rot_1 & 1);
    MemoryInline::FlatWrite32(r4, r29);
    f4.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(13));
    r0 = (r0_rot_2 & 3);
    MemoryInline::FlatWrite32(r5, r30);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26684));
    MemoryInline::FlatWriteRam32((r1 + 28), r12);
    r4 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 24), r31);
    f3.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteFloat32(r6, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32(r7, f3.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32(r4, r0);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00027FE gpr_write=0xF000181B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80170CBC func_80170CBC preserves=true fpr_mask=0x00000000
