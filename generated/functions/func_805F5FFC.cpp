#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F8B24_statefree(uint32_t, PPC_FPR, PPC_FPR, PPC_FPR);

extern "C" void func_805F5FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_805F5FFC;

loc_805F5FFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 24736);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 164u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 12));
    r3 = (r30 + 12);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 20));
    r3 = (r30 + 24);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    r3 = (r30 + 36);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    r3 = (r30 + 48);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    r3 = (r30 + 60);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    r3 = (r30 + 72);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    r3 = (r30 + 84);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    r3 = (r30 + 96);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r31 + 64));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r31 + 68));
    r3 = (r30 + 108);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r31 + 76));
    r3 = (r30 + 120);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r31 + 84));
    r3 = (r30 + 132);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r31 + 88));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r31 + 92));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r31 + 96));
    r3 = (r30 + 144);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    r3 = (r30 + 156);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r31 + 100));
    r3 = (r30 + 168);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r31 + 88));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r31 + 92));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r31 + 68));
    r3 = (r30 + 180);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r31 + 104));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r31 + 76));
    r3 = (r30 + 192);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r31 + 108));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r31 + 84));
    r3 = (r30 + 204);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r31 + 92));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r31 + 96));
    r3 = (r30 + 216);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r31 + 104));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    r3 = (r30 + 228);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r31 + 108));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r31 + 100));
    r3 = (r30 + 240);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r31 + 92));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r3 = (r30 + 252);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r31 + 112));
    r3 = (r30 + 264);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r31 + 116));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 20));
    r3 = (r30 + 276);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 288);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r31 + 120));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 300);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r31 + 124));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 128));
    r3 = (r30 + 312);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 132u, (r31 + 132));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 324);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 336);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 348);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 360);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 372);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 384);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 396);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 408);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 420);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 432);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 444);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 456);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 468);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 480);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 492);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 504);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 516);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 528);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 540);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 552);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 564);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 576);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 588);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 600);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 612);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 624);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 636);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 648);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 660);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 672);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 684);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 696);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 708);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 720);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 732);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 744);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 756);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 768);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 780);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 792);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 804);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 816);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 828);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 840);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 852);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 864);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 876);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 888);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 900);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 912);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 924);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 936);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 948);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 960);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 972);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 984);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 996);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1008);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1020);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1032);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1044);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1056);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1068);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1080);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1092);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1104);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1116);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1128);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1140);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1152);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1164);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1176);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1188);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1200);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1212);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1224);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1236);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1248);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1260);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1272);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1284);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1296);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1308);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1320);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1332);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1344);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1356);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1368);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1380);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1392);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1404);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1416);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1428);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1440);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1452);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1464);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1476);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1488);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1500);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1512);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1524);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1536);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1548);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1560);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1572);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1584);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1596);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1608);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1620);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1632);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1644);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1656);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1668);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1680);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1692);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1704);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1716);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1728);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1740);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1752);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1764);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1776);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1788);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1800);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1812);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1824);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1836);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1848);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1860);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1872);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1884);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1896);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1908);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1920);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1932);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1944);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1956);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1968);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1980);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 1992);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2004);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2016);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2028);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2040);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2052);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2064);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2076);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2088);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2100);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2112);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2124);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2136);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2148);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2160);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2172);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2184);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2196);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2208);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2220);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2232);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2244);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2256);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2268);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2280);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2292);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2304);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2316);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2328);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2340);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2352);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2364);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2376);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2388);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2400);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2412);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2424);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2436);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2448);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2460);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2472);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2484);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2496);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2508);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2520);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2532);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2544);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2556);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2568);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2580);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2592);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2604);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2616);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2628);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2640);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2652);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2664);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2676);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2688);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2700);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2712);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2724);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2736);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2748);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2760);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2772);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2784);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2796);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2808);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2820);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2832);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2844);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2856);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2868);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2880);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2892);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2904);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2916);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2928);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2940);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2952);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2964);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2976);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 2988);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3000);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3012);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3024);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3036);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3048);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3060);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3072);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3084);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3096);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3108);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3120);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3132);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3144);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3156);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3168);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3180);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3192);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3204);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3216);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3228);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r3 = (r30 + 3240);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r31 + 112));
    r3 = (r30 + 3252);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r31 + 136));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r31 + 116));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r31 + 140));
    r3 = (r30 + 3264);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r31 + 116));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    r3 = (r30 + 3276);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    r3 = (r30 + 3288);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r31 + 144));
    r3 = (r30 + 3300);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r31 + 148));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    r3 = (r30 + 3312);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    r3 = (r30 + 3324);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r31 + 144));
    r3 = (r30 + 3336);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r31 + 64));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r31 + 152));
    r3 = (r30 + 3348);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r31 + 76));
    r3 = (r30 + 3360);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r31 + 152));
    r3 = (r30 + 3372);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r31 + 156));
    r3 = (r30 + 3384);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    r3 = (r30 + 3396);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r31 + 156));
    r3 = (r30 + 3408);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r31 + 152));
    r3 = (r30 + 3420);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r31 + 76));
    r3 = (r30 + 3432);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r31 + 108));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r31 + 152));
    r3 = (r30 + 3444);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r31 + 156));
    r3 = (r30 + 3456);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    r3 = (r30 + 3468);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r31 + 108));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r31 + 156));
    r3 = (r30 + 3480);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r3 = (r30 + 3492);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
        }
    }
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r31 + 140));
    r3 = (r30 + 3504);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r31 + 116));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r31 + 140));
    r3 = (r30 + 3516);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r31 + 116));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3528);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r31 + 92));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3540);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r31 + 92));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r31 + 160));
    r3 = (r30 + 3552);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3564);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3576);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3588);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3600);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3612);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3624);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3636);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3648);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3660);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3672);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3684);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3696);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3708);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3720);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3732);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3744);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3756);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3768);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3780);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3792);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3804);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3816);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3828);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3840);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3852);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3864);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3876);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3888);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3900);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3912);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3924);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3936);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3948);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3960);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3972);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3984);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 3996);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4008);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4020);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4032);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4044);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4056);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4068);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4080);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4092);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4104);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4116);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4128);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4140);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4152);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4164);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4176);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4188);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4200);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4212);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4224);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4236);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4248);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4260);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4272);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4284);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4296);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4308);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4320);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4332);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4344);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4356);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4368);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4380);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4392);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4404);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4416);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4428);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4440);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4452);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4464);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4476);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4488);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4500);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4512);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4524);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4536);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4548);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4560);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4572);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4584);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4596);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4608);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4620);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4632);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4644);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4656);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4668);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4680);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4692);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4704);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4716);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4728);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4740);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4752);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4764);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4776);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4788);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4800);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4812);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4824);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4836);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4848);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4860);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4872);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4884);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4896);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4908);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4920);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4932);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4944);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4956);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4968);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4980);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 4992);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5004);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5016);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5028);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5040);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5052);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5064);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5076);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5088);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5100);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5112);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5124);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5136);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5148);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5160);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5172);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5184);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    // inline leaf 0x805F8B24 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x805F8B24
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r3 = (r30 + 5196);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5208);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5220);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5232);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5244);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5256);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5268);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5280);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5292);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5304);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5316);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5328);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5340);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5352);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5364);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5376);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5388);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5400);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5412);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5424);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5436);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5448);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5460);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5472);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5484);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5496);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5508);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5520);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5532);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5544);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5556);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5568);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5580);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5592);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5604);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5616);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5628);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5640);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5652);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5664);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5676);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5688);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5700);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5712);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5724);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5736);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5748);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5760);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5772);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5784);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5796);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5808);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5820);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5832);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5844);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5856);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5868);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5880);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5892);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5904);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5916);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5928);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5940);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5952);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5964);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5976);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 5988);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6000);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6012);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6024);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6036);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6048);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6060);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6072);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6084);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6096);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6108);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6120);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6132);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6144);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6156);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6168);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6180);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6192);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6204);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6216);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6228);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6240);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6252);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6264);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6276);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6288);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6300);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6312);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6324);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6336);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6348);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6360);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6372);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6384);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6396);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6408);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6420);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6432);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6444);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6456);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r30 + 6468);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F8B24u) && KnownTranslatedCpuCall<0x805F8B24u>::kAvailable && !KnownTranslatedCpuCall<0x805F8B24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F8B24u>()) {
        func_805F8B24_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x805F8B24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 6480), 0, 48u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 6480), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r30 + 6481), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r30 + 6482), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r30 + 6483), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r30 + 6484), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r30 + 6485), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r30 + 6486), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r30 + 6487), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r30 + 6488), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r30 + 6489), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r30 + 6490), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r30 + 6491), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r30 + 6492), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r30 + 6493), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r30 + 6494), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r30 + 6495), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r30 + 6496), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r30 + 6497), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r30 + 6498), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r30 + 6499), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r30 + 6500), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r30 + 6501), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r30 + 6502), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r30 + 6503), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r30 + 6504), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r30 + 6505), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r30 + 6506), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r30 + 6507), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r30 + 6508), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r30 + 6509), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r30 + 6510), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r30 + 6511), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r30 + 6512), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r30 + 6513), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r30 + 6514), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r30 + 6515), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r30 + 6516), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r30 + 6517), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r30 + 6518), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r30 + 6519), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r30 + 6520), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r30 + 6521), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r30 + 6522), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r30 + 6523), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r30 + 6524), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r30 + 6525), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r30 + 6526), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r30 + 6527), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F5FFC func_805F5FFC preserves=true fpr_mask=0x00000000
