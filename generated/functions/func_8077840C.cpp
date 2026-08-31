#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8077840C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8077840C;

loc_8077840C:
{
    MemoryInline::FlatWriteRam32((r1 + -400), r1);
    r1 = (r1 + -400);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    r4 = (r1 + 188);
    MemoryInline::FlatWriteRam32((r1 + 396), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 17024);
    MemoryInline::FlatWriteRam32((r1 + 392), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 80u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    r3 = (r1 + 200);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
    r3 = (r1 + 212);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r4 = (r1 + 176);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    r3 = (r1 + 224);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r4 = (r1 + 164);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
    r3 = (r1 + 236);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r4 = (r1 + 152);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
    r3 = (r1 + 248);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r4 = (r1 + 140);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    r3 = (r1 + 260);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r4 = (r1 + 128);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
    r3 = (r1 + 272);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r4 = (r1 + 116);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    r3 = (r1 + 284);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r4 = (r1 + 104);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    r3 = (r1 + 296);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    r4 = (r1 + 92);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r31 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r31 + 68));
    r3 = (r1 + 308);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    r4 = (r1 + 80);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    r3 = (r1 + 320);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    r4 = (r1 + 68);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r31 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
    r3 = (r1 + 332);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 60));
    r4 = (r1 + 56);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    r3 = (r1 + 344);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 60));
    r4 = (r1 + 44);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    r3 = (r1 + 356);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 60));
    r4 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    r3 = (r1 + 368);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 60));
    r4 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    r3 = (r1 + 380);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 60));
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = 68;
    ctx->lr = 0x807786B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807786B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807786C8;
    }
}

loc_807786BC:
{
    r5 = (r1 + 200);
    r4 = 16;
    ctx->lr = 0x807786C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x808364E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807786C8:
{
    MemoryInline::FlatWrite32((r30 + 172), r3);
    r31 = MemoryInline::FlatRead32((r1 + 396));
    r30 = MemoryInline::FlatRead32((r1 + 392));
    r0 = MemoryInline::FlatRead32((r1 + 404));
    ctx->lr = r0;
    r1 = (r1 + 400);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8077840C func_8077840C preserves=true fpr_mask=0x00000000
